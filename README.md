![circuit image 2](https://github.com/user-attachments/assets/fd6d9abf-606e-443a-8883-5e0a8a191040)

# Lil Invention Fo Da Tuk-Tuk Drivers


## Basic Details
### Team name:- Power Surge 


### Team Members
- Team Lead: Abdel Baasit - College of engineering perumon
- Member 2: Sian Soj - College of engineering perumon
- Member 3: Karthik Murali - College of engineering perumon

### Project Description
This skibidi device made for the world's more enthusiastic drivers, particularly tuk-tuk drivers and those notorious "chapri" drivers who believe that signaling is merely a suggestion. This gadget is similar to a backseat driver, but instead of urging you to slow down, it serves as a reminder that it is OK to indicate when it is your turn.

### The Problem (that doesn't exist)
Preventing tuk tuk drivers from "driving on point"

### The Solution (that nobody asked for)
By using a screen and 2 leds(as indicators), we can provide according output without manually using the indicator to turn.In a nutshell...indicator-LESS
driving experience.

## Technical Details
### Technologies/Components Used

### Main Components

- esp8266 Wifi module
- Led's 
- 16 x2 Lcd Module

### Software Specifications

#### Programming Language:
Arduino IDE (C++)
#### Libraries:
 - ESP8266WiFi.h: To enable Wi-Fi connectivity on the ESP8266
 - ESP8266HTTPClient.h: For making HTTP GET requests to fetch navigation data
 - ArduinoJson.h: For parsing JSON response data from the API
 - LiquidCrystal.h: To manage the 16x2 LCD display
#### API Endpoint:
   - Uses the OSRM API to fetch navigation instructions
   - Example endpoint: "http://router.project-osrm.org/route/v1/driving/{lon},{lat};{lon},{lat}"
   - JSON response contains route_step API, with information on direction (modifier), and duration of each step

 #### tools required

 - Jumper Wires: Male-to-male and male-to-female for connecting components.
 - Resistors: 220Ω or 330Ω resistors to limit current for LEDs.
 - Breadboard: for prototyping and making connections.
 

### Implementation


# Schematic & Circuit
 - basically, we had tried connectig our lcd module, but unfortunately at the last moment, it spotted giving values and random rows and columns were
 getting enabled.since we didn't had other lcd module. we were only able to use led lights.

 - The circuit diagram for the improvised model is given below;
 ![circuit_image](https://github.com/user-attachments/assets/81180dce-a6b6-460d-bc03-985733041f01)


###connnections
  -D1 (ESP8266) ➔ Left LED (Anode)
  -D2 (ESP8266) ➔ Right LED (Anode)
  -GND (ESP8266) ➔ Breadboard Ground Rail ➔ Left LED (Cathode) ➔ Right LED (Cathode)

# Build Photos
## Components
 ![WhatsApp Image 2024-10-26 at 19 20 40_77021ea6](https://github.com/user-attachments/assets/88d65e63-2dfe-43ee-ba55-93d80ae42055)
 
 - we made sure that the nodemcu can connect to a network
 ![networksucesfull](https://github.com/user-attachments/assets/57995716-56cc-454f-a444-562ace29b7fd)

- we used API of OSRM(open street road maps) to fetch the duration of estimated travel time and indications (where and when to turn).
  ![reute api](https://github.com/user-attachments/assets/8ef23373-8bcc-4e44-8461-4d572ee7bb08)
- the routeStep object provided the perfect vakues from the responce

### Final Build
*Explain the final build*

### Project Demo
# Video
[Add your demo video link here]
*Explain what the video demonstrates*

# Additional Demos
[Add any extra demo materials/links]

## Team Contributions
- [Name 1]: [Specific contributions]
- [Name 2]: [Specific contributions]
- [Name 3]: [Specific contributions]

---
Made with ❤️ at TinkerHub Useless Projects 

![Static Badge](https://img.shields.io/badge/TinkerHub-24?color=%23000000&link=https%3A%2F%2Fwww.tinkerhub.org%2F)
![Static Badge](https://img.shields.io/badge/UselessProject--24-24?link=https%3A%2F%2Fwww.tinkerhub.org%2Fevents%2FQ2Q1TQKX6Q%2FUseless%2520Projects)



