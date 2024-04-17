/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.15: page:78

Sketch: breaking out of a loop
Wiring: ---

* break sketch 
* Demonstrate the use of the break statement
 
* My modification:
* oryginal code 

MK:
C:2024.04.15
M:2020.04.15
*/

const int switchPin = 2; // digital input

void setup()
{
 Serial.begin(9600);
 pinMode(LED_BUILTIN, OUTPUT); // enable LED pin as output
 pinMode(switchPin, INPUT_PULLUP); // enable button pin as input
}

void loop()
{
 while(true) // endless loop
 {
  if(digitalRead(switchPin) == LOW)
  {
    break; // exit the loop if the switch is pressed
  }
  // continuously blinkig if switch is not pressed
  blink(); // call a function to turn an LED on and OFF
 }

}

void blink()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

