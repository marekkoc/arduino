/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.13: page:75

Sketch: Repeating a sequence of statemets - WHILE loop with a break from Serial input
Wiring: There is no information about wiring in the text. Probably the same as with photoresistor 1.6 (p. 23)

* Repeat blinks while a condition is true. 
* Break the loop from Serial input
 
* My modification:
* oryginal code 

MK:
C:2024.04.15
M:2020.04.15
*/

const int sensorPin = A0; // analog input 0

void setup()
{
 Serial.begin(9600);
 pinMode(LED_BUILTIN, OUTPUT); // enable LED pin as output
}

void loop()
{
  while(analogRead(sensorPin) > 500)
  {
    blink(); // call the function to trun the LED on and off
    Serial.print(".");

    if(Serial.available())
    {
      while (Serial.available())
      {
        // consume any pending serial input
        char val = Serial.read();
        Serial.println(val);
      }
      break; // sny serial input break out of while loop
    }


  }
  Serial.print(analogRead(sensorPin)); // this is not exectured until after the while loop finishes!!!
  Serial.print(";");
}

void blink()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

