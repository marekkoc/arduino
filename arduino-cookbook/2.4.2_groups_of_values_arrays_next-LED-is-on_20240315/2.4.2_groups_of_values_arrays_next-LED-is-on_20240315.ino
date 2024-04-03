/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.4: page:45

Sketch: Working wit Groups of Values

* array sketch
* an array of switches controls an array of LEDs
* see Chapter 5 for more on using switches
* see Chapter 7 for information on LEDs

* My modification:
* With the use of modulo operator (%) I turn on the next LED in the row!


MK:
C:2024.03.15
M:2020.03.15
*/

 int inputPins[] = {2, 3, 4, 5}; // create an array of pins for switch inputs
 int ledPins[] = {10, 11, 12, 13}; // create an array of output pins for leds


 void setup()
 {
  for (int index = 0; index < 4; index++)
  {    
    pinMode(inputPins[index], INPUT_PULLUP); // declare as input
    pinMode(ledPins[index], OUTPUT); // declare LED as output
  }
 }

 void loop(){
  for (int index = 0; index < 4; index++)
  {
    int idx = (index + 1) % 4; // calculate the next index
    int val = digitalRead(inputPins[index]); // read input value

    if (val == LOW)                          // check if the switch is pressed
    {
      digitalWrite(ledPins[idx], HIGH);   // LED on if the switch is pressed
    }
    else {
    digitalWrite(ledPins[idx], LOW);    // turn LED off
    }
  }
 }
