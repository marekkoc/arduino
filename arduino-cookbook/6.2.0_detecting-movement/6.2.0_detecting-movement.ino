/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 6.2.0: page:225

Sketch: tilt sketch
Wiring: p.226

 My modification:
* oryginal code

MK:
C:2024.05.04
M:2020.05.04

a tilt sensor attached to pin 2 ligths one of the LEDs
 connected to pins 11 and 12 depending on which
 way the sensor is tilted
  
*/
const int tiltSensorPin = 2; // pin the tilt sensor is connected to
const int firstLEDPin = 11; // pin for one LED
const int secondLEDPin = 12; // pin for the other LED



void setup()
{
  pinMode(tiltSensorPin, INPUT_PULLUP); // Tilt sensor connected to this pin
/home/marek/Arduino-git/ldr/ldr.ino
  pinMode(firstLEDPin, OUTPUT); // first output LED
  pinMode(secondLEDPin, OUTPUT); // second LED output
}

void loop() 
{
  if(digitalRead(tiltSensorPin) == LOW) // The switch is on (upright)
  {
    digitalWrite(firstLEDPin, HIGH); // turn on the first LED
    digitalWrite(secondLEDPin, LOW); // turn off the second LED
  }
  else  // the switch is off (tilted)
  {
    digitalWrite(firstLEDPin, LOW); // turn off the first led
    digitalWrite(secondLEDPin, HIGH); // turn on the second led

  }

}

