/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.14: page:77

Sketch: for loop sketch
Wiring: ----

* Demonstrating for loop - test value: les than or equal to
* 
 
* My modification:
* test value is lest than or equal to 5


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
  int j;

  Serial.println("for(int j=0; j <= 5; j++)");
  for(j=0; j <= 5; j++) // without initialization of the j variable ("int")
  {
    Serial.println(j);
    delay(1000);
  }
  Serial.println();
}

