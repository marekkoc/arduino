/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.14: page:77

Sketch: for loop sketch
Wiring: 5.2, page: 188

* Demonstrating for loop - Value in a for loop is connected with value at pin 2
* 
 
* My modification:
* for loop increase i variable only if on pin 2 is lewel HIGH 


MK:
C:2024.04.15
M:2020.04.15
*/

const int inputPin = 2;

void setup()
{
 Serial.begin(9600);
 pinMode(inputPin, INPUT_PULLUP);
}

void loop()
{
  Serial.println("for(int i=0; i < 4;)");
  for(int i=0; i < 4;) // without iteration part
  {
    Serial.print(i);
    if(digitalRead(inputPin) == LOW)
    {
      i++; // only increment the value if the button is pressed
    }
    delay(1000);
  }
  Serial.println();
}

