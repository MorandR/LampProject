
# Lamp "Clapper" Project

## Utilizing Frequency of Pitch

### Description
Arduino Project which takes in signal from user or source and transmit the frequencies received to turn on and turn off lamp.
Like the established “The Clapper”, this experiment will reflex from a given sound and pattern. Once this has successfully operated as expected, we then move on to another process. This next step is to activate based on pitch in frequency instead of sound.

### Introduction
This project was inspired by a college student’s perspective. After hours of lectures, study sessions and being away from the dorm, we still have to review assignments and research as experiential learning.

### Materials
> Lamp with a power plug __
> Arduino Uno R3 Board__
> Mini Breadboard__
> Sound Sensor Module__
> Relay Module (5V)__
> 9V  Battery Clip__
> 9V  Battery__
> Dupont Wires__

Developers Tool: Arduino IDE 1.8.19


Identify the positive wire (usually copper) on the lamp’s cord:
The lamp’s plug has two blades of different widths. The widest blade is known as the neutral blade as the narrow blade is known as the hot blade.
The hot blade is connected to the positive wire
The neutral blade is connected to the neutral wire

![Alt text](Image URL)

#### Electrical Wiring Instructions:

Cut the wire corresponding to the hot blade
Cut off the polar wire  to reveal only the copper.
Relay Module (terminal side): 
Insert the plug-sided wire in the NO input 
Insert the lamp-sided wire in the COM input (middle)
Relay pins to Arduino
Connect Relay Ground (-) pin to Arduino Ground pin
Connect Relay 5V VCC  (+) pin to Arduino 5V power
Connect Relay Input Signal (S) pin to Arduino’s Digital socket (between 2 and 13 ONLY)

Sound sensor pins to Arduino
Connect Sensor output (OUT) pin to Arduino’s Digital socket (between 2 and 13 ONLY)
Connect Sensor Ground (GND) pin to Arduino Ground pin
Connect Senor VCC

You may now begin the fun!

Comments are displayed in the code itself. Click __here__ to view the code and comments.

### Glossary

COM - Common terminal
GND (Ground) – the reference point for all signals or a common path in an electrical circuit where all of the voltages can be measured from.
NC (Normally Closed terminal)  – keep the Relay closed so no circuit flows through, unless a signal is sent to open and stop the circuit
NO (Normally Open terminal) – allows circuit to come through automatically unless a signal is sent to close the circuit
VCC (Voltage Common Collector) – the higher voltage with respect to GND (ground). 

### References

Plug labels - https://www.boulderufixitclinic.org/lamp-repair__
Knowledge - https://randomnerdtutorials.com/guide-for-relay-module-with-arduino/


