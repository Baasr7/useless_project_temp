#include <LiquidCrystal.h>

// Define the pins for the LCD
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2, ct = 9;
LiquidCrystal mylcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Set PWM output for pin 9 (if needed)
  analogWrite(ct, 80);

  // Initialize the LCD with 16 columns and 2 rows
  mylcd.begin(16, 2);

  // Print initial message
  //mylcd.print("you are horrible...");

  // Wait for 2 seconds before showing random message

  // List of phrases
  const char* phrases[] = {
   "Why even bother?",
  "Failure is near.",
  "Dreams fade away.",
  "It's never enough.",
  "You will lose.",
  "Give up already.",
  "Hope is pointless.",
  "Nothing matters.",
  "Life's just pain.",
  "You can't win."
  };

  // Number of phrases
  int numPhrases = sizeof(phrases) / sizeof(phrases[0]);

  // Seed the random number generator using an unconnected analog pin
  randomSeed(analogRead(0));

  // Clear the screen and show a random phrase
  mylcd.clear();
  int randomIndex = random(numPhrases);
  mylcd.print(phrases[randomIndex]);
}

void loop() {
  // Loop does nothing for now
}
