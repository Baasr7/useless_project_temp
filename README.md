<img width="1280" alt="readme-banner" src="https://github.com/user-attachments/assets/35332e92-44cb-425b-9dff-27bcf1023c6c">

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

#### Main Components

- esp8266 Wifi module
- Led's 
- 16 x2 Lcd Module

#### Software Specifications

-Programming Language: Arduino IDE (C++)
-Libraries:
     ESP8266WiFi.h: To enable Wi-Fi connectivity on the ESP8266
     ESP8266HTTPClient.h: For making HTTP GET requests to fetch navigation data
     ArduinoJson.h: For parsing JSON response data from the API
     LiquidCrystal.h: To manage the 16x2 LCD display
-API Endpoint:
     Uses the OSRM API to fetch navigation instructions
     Example endpoint: "http://router.project-osrm.org/route/v1/driving/{lon},{lat};{lon},{lat}"
     JSON response contains route_step API, with information on direction (modifier), and duration of each step

 #### tools required

 -Jumper Wires: Male-to-male and male-to-female for connecting components.
 -Resistors: 220Ω or 330Ω resistors to limit current for LEDs.
 -Breadboard: for prototyping and making connections.
 

### Implementation


# Schematic & Circuit
![Circuit](Add your circuit diagram here)
*Add caption explaining connections*

![Schematic](Add your schematic diagram here)
*Add caption explaining the schematic*

# Build Photos
![Components](Add photo of your components here)
*List out all components shown*

![Build](Add photos of build process here)
*Explain the build steps*

![Final](Add photo of final product here)
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



