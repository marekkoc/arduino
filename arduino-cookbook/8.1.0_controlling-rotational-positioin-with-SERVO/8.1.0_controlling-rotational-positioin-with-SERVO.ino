/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 8.1.0: page:336

Sketch: Servo rotation sketch
Wiring: p.337

 My modification:
* oryginal code

MK:
C:2024.05.05
M:2020.05.05  
*/

#include <Servo.h>

Servo myservo; // create servo object to control a servo

int angle = 0; // variable to store the servo position

void setup()
{
  myservo.attach(9); // attaches the servo on pin 9 to the servo object
}

void loop() 
{
  for( angle = 0; angle < 180; angle += 1) // goest from 0 degrees to 180 degrees in steps of 1 degree
  {
    myservo.write(angle); // tell servo to go to position in variable 'angle' waits 20 ms between servo commands
    delay(20);
  }

  for (angle = 180; angle >= 1; angle -=1 ) // goes from 180 degrees to 0 degrees
  {
    myservo.write(angle); // move servo in opposite direction, waits 20 ms between servo commands
    delay(20);
  }

}

