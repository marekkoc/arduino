/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.14: page:75

Sketch: for loop sketch
Wiring: ----

* Demonstrating for loop
* 
 
* My modification:
* oryginal code


MK:
C:2024.04.15
M:2020.04.15
*/



void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("for(int i=0; i<4; i++)");
  for(int i=0; i < 4; i++)
  {
    Serial.println(i);
    delay(1000);
  }
  Serial.println();
}

