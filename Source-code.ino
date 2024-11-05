#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>
#include <LiquidCrystal.h>


const int RS = D2, EN = D3, d4 = D5, d5 = D6, d6 = D7, d7 = D8, ct = D0; // LCD pin
LiquidCrystal lcd(RS, EN, d4, d5, d6, d7); // lCD obj

// LED pin definitions
const int ledRightPin = D4;  // Right LED pin
const int ledLeftPin = D3;   // Left LED pin

const char* ssid = "Nothing";           
const char* password = "00000000";    
const char* apiUrl = "http://router.project-osrm.org/route/v1/driving/76.62018,8.964556;76.63337,8.938975?overview=full&steps=true"; // OSRM API URL

void setup() {
  pinMode(ledRightPin, OUTPUT); 
  pinMode(ledLeftPin, OUTPUT);  
   
  
  Serial.begin(9600);          // Baud Rate        
  WiFi.begin(ssid, password);
  
  // Waiting for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to WiFi");

  WiFiClient client;
  HTTPClient http;
  http.begin(client, apiUrl);                    // Initialize HTTP client
  int httpCode = http.GET();             // Send GET request

  if (httpCode > 0) {                    // Check for a successful response
    String payload = http.getString();   // Get response payload to a string
    Serial.println("Received JSON: " + payload );

    // now Parse JSON data
    StaticJsonDocument<2000> doc;        // Define document size, adjust if needed
    DeserializationError error = deserializeJson(doc, payload);

    if (!error) {
      // Extract steps and print duration and modifier
      JsonArray steps = doc["routes"][0]["legs"][0]["steps"];
      Serial.println("Duration and Modifier for each step:");
      
      for (JsonObject step : steps) {
        float duration = step["duration"];                  // Duration for the step in seconds
        String modifier = step["maneuver"]["modifier"];     // Direction modifier for the maneuver

        // Print duration and modifier
        Serial.println("Duration: " + String(duration) + " seconds");
        Serial.println("Modifier: " + modifier);
        
        // Act based on modifier
        if (modifier == "left") {
          blinkLED(ledLeftPin, 2); // Blink left LED twice
        } else if (modifier == "right") {
          blinkLED(ledRightPin, 2); // Blink right LED twice
        } else if (modifier == "straight") {
          blinkLED(ledLeftPin, 2);  // Blink left LED twice
          blinkLED(ledRightPin, 2); // Blink right LED twice
        }

        
        delay(duration * 1000); // Wait for the step duration (in milliseconds)
       
      }
    } else {
      Serial.print("JSON parse failed: ");
      Serial.println(error.c_str());
    }
  } else {
    Serial.print("Error on HTTP request: ");
    Serial.println(httpCode);
  }
  http.end(); // Close connection
}

void loop() {
  // Nothing here for now
}

// Function to blink LED
void blinkLED(int ledPin, int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(ledPin, HIGH); // Turn LED on
    delay(250);                 // Wait for 250 milliseconds
    digitalWrite(ledPin, LOW);  // Turn LED off
    delay(250);                 // Wait for 250 milliseconds
  }
}
