/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 8.2.0: page:339

Sketch: Servo rotation with potentiometer or sensor
Wiring: p.339

 My modification:
* oryginal code

MK:
C:2024.05.06
M:2020.05.06  
*/

#include <Servo.h>

Servo myservo; // create servo object to control a servo

int potpin = A0; // analog pin used to connect the potentiometer
int val; // variable to read the value from the analog pin



void setup()
{
  myservo.attach(9); // attaches the servo on pin 9 to the servo object
}

void loop() 
{
  val = analogRead(potpin); // reads the value of the potentiometer
  val = map(val, 0, 1023, 0, 180); // scale it to use it with the servo
  myservo.write(val); // sets position to the scaled value
  delay(150); // waits for the servo to get there 

}

