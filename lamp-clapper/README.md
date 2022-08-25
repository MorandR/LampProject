
# Lamp "Clapper" Project

## Utilizing Frequency of Pitch

### Description
Arduino Project which takes in signal from user or source and transmit the frequencies received to turn on and turn off lamp.
Like the established “The Clapper”, this experiment will reflex from a given sound and pattern. Once this has successfully operated as expected, we then move on to another process. This next step is to activate based on pitch in frequency instead of sound.

### Introduction
This project was inspired from a college student’s perspective. After hours of lectures, study sessions and being away from the dorm, we are drained by the end of day and still have to research or review assignments. During moments of late night studying we are sometimes far from the lights and tend to fall asleep; at least I do at times... 👀. This project is the solution to simply our life by "vocally" triggering the lights without getting out of our comfty bed. 

### Materials

- Lamp with a power plug
- Arduino Uno R3 Board
- Sound Sensor Module
- 9V  Battery Clip
- 9V  Battery
- Dupont Wires <br/>
- Developers Tool: Arduino IDE 1.8.19

 <img  alt='lamp.gif' src="./visuals/lamp.gif" width="168" height="275"/>
  
Identify the positive wire (usually copper) on the lamp’s cord:  <br/>
The lamp’s plug has two blades of different widths. <br/>
The widest blade is known as the neutral blade as the narrow blade is known as the hot blade.  <br/>
The hot blade is connected to the positive wire  <br/>
The neutral blade is connected to the neutral wire  <br/>

 <img  alt='plug.label' src="./visuals/plug_label.png" width="275" height="152"/>

#### Electrical Wiring Instructions:

Cut the wire corresponding to the hot blade <br/>
Cut off the polar wire  to reveal only the copper. <br/>
Relay Module (terminal side): <br/>
Insert the plug-sided wire in the NO input <br/>
Insert the lamp-sided wire in the COM input (middle) <br/><br/>

#### <ins> Relay pins to Arduino </ins> <br/>
Connect Relay Ground (-) pin to Arduino Ground pin <br/>
Connect Relay 5V VCC  (+) pin to Arduino 5V power <br/>
Connect Relay Input Signal (S) pin to Arduino’s Digital socket (between 2 and 13 ONLY) <br/>

#### <ins> Sound sensor pins to Arduino </ins> <br/>
Connect Sensor output (OUT) pin to Arduino’s Digital socket (between 2 and 13 ONLY) <br/>
Connect Sensor Ground (GND) pin to Arduino Ground pin <br/>
Connect Senor VCC <br/>

You may now begin the fun!

Comments are displayed in the code itself. Click [here](/lamp_claper.ino) to view the code and comments.

### Glossary

COM – Common terminal <br/>
GND (Ground) – the reference point for all signals or a common path in an electrical circuit where all of the voltages can be measured from. <br/>
NC (Normally Closed terminal)  – keep the Relay closed so no circuit flows through, unless a signal is sent to open and stop the circuit. <br/>
NO (Normally Open terminal) – allows circuit to come through automatically unless a signal is sent to close the circuit. <br/>
VCC (Voltage Common Collector) – the higher voltage with respect to GND (ground). <br/>

### References

Plug labels - https://www.boulderufixitclinic.org/lamp-repair <br/>
Knowledge - https://randomnerdtutorials.com/guide-for-relay-module-with-arduino/


