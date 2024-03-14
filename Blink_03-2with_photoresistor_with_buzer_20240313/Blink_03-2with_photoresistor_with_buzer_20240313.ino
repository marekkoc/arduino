/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.3: page: 43

Sketch: Using floating-point numbers

* Floating-point example
* This sketch initialized a float value to 1.1
* It repeatedly reduces the value by 0.1 until th value is 0

MK:
C:2024.03.14
M:2020.03.14
*/

float value = 1.1

void setup() {
 Serial.begin(9600)
}

// enable output on the led pin
void loop() {
  value = value - 0.1; // reduce value by 0.1 each time through the loop

  if(value == 0)
  {
    Serial.println("The value is exactly zero!");
  }
  else
  
}
