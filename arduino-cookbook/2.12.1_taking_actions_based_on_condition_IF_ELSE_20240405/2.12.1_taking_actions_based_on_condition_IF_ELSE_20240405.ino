/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.12: page:72-73

Sketch: Taking actions based on condition - IF - ELSE statement
Wiring: Recipe 5.2, p. 188

* Pushbutton sketch
* a switch connected to digital pin 2 lights the built-in LED

 
* My modification:
* oryginal code 

MK:
C:2024.04.05
M:2020.04.05
*/

const int inputPin = 2; // choose the input pin (for a pushbutton)

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);   // declare LED pin as output
  pinMode(inputPin, INPUT_PULLUP); // declare pushbutton pin as input
}

void loop()
{
  int val = digitalRead(inputPin); // read input value
  if (val == LOW)   // input is LOW when the button is pressed
  {
    // do this if val is LOW
    digitalWrite(LED_BUILTIN, HIGH); // turn the LED on if switch is pressed
  }
  else
  {
    // else do this if val si not LOW
    digitalWrite(LED_BUILTIN, LOW); // turn the LED off if seitch is not pressed
  }
}

