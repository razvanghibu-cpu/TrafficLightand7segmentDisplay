 ## Traffic light using 3 leds and a 7 segment display for countdown
 A simple traffic light configuration built on Arduino Uno using the 7 segment display as a countdown for the change of light.
 ### Features:
 + 3 Phases(red,green,green with flashing yellow to indicate the change to red)
 + Live timer showing the time to the next colour change
 + Adjustable phase durations(the original is 7 seconds between colour change)

### Components used:
   |Component | Quantity |
   | -- | -- |
   |Arduino Uno | 1 |
   |220Ω resistor | 4 |
   |7 segment display | 1 |
   | Breadbord | 2* |
   |Wires(male-to-male)| 11 |

   
   *I used one MB-102 breadboard(for the leds) and a mini breadboard for the display.

  
### Pin mapping:
|Component | Arduino pin |
   | --- | --- |
|Segment A| D1|
|Segment B| D2|
|Segment C| D3|
|Segment D| D4|
|Segment E| D5|
|Segment F| D6|
|Segment G| D7|
|Display common (G2)| GND|
|Red LED| D8|
|Yellow LED| D9|
|Green LED| D10|


### Schematic

![Schematic](schematic.png)

### Fritzing demonstration
![Schematic](fritzingdemonstration.png)







   
   
