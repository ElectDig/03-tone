![Austral Ingenieria](https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcQooGo7vQn4t9-6Bt46qZF-UY4_QFpYOeh7kVWzwpr_lbLr5wka)

#   Project 03-tone

##  Tone generation in ESP32

 Electronica Digital - Austral - 2023 - EAM
 Uses ESP32 microcontroller

 **Note**: Before attempting this test, pleas read throughfully Web page in _Links_

###  Hardware

 1 low signal NPN transistor as, for example, 2N3904
 1 220 ohm resistor
 1 Diode as, for example, 1N4001
 1 Passive buzzer of magnetic or piezoelectric type
 cables

###  Connections

 **Important note**: for a passive buzzer of piezoelectric type, V+ must be 3.3 Volt; for a passive buzzer of magnetic type, V+ must be 5 Volt

 Connect device buzzer plus to V+
 Connect other side of device buzzer to collector of transistor

 Connect diode cathode to device buzzer plus
 Connect diode anode to other side of device buzzer

 Connect emitter of transistor to GND
 Connect one side of resistor to transistor base
 Connect other side of resistor to GPIO "BUZZER"

###  Verification

 Program will swipe frequency connected to buzzer from 100 Hz to 2 KHz in 100 Hz steps, each of 1 second duration
 Also, each frequency is printed in serial monitor

###  Links

 [Active and Passive Buzzer for Arduino, ESP8267 and ESP32](https://diyi0t.com/active-passive-buzzer-arduino-esp8266-esp32/)

 Program for passive buzzer in link permits to create a melody; try it





