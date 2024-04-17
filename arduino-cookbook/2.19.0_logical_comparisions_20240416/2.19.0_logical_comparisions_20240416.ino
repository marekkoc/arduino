/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.19: page:85

Sketch: Logical comparision
Wiring: My own wiring with LEDS.

* My goal: is to play with logic operations and on/off LEDs on the universal board.
* The source code is based on sketch nr 2.12 with IF-ELSE statement

 
* My modification:
* oryginal code 

MK:
C:2024.04.16
M:2020.04.16
*/

String stringOne, stringTwo;

const int switch1 = 2; // switch 1
const int switch2 = 3; // switch 2

const int led1 = 11; // LED 1
const int led2 = 12; // LED 2


void setup()
{
 pinMode(led1, OUTPUT); // build in LED
 pinMode(led2, OUTPUT); // build in LED

 pinMode(switch1, INPUT_PULLUP); // digital input, pin 2, to connect switch 1
 pinMode(switch2, INPUT_PULLUP); // digital input, pin 3, to connect switch 2
}

void loop()
{
  int val1 = digitalRead(switch1); // read the voltage level on switch 1 (pin 2)
  int val2 = digitalRead(switch2); // read the voltage level on switch 2 (pin 3)

  funkcja1(val1, val2);


/*
  //thest lines might be used to test if the circut works properly
  if (val1 == LOW) digitalWrite(led1, HIGH);
  else digitalWrite(led1, LOW);

  if (val2 == LOW) digitalWrite(led2, HIGH);
  else digitalWrite(led2, LOW);
  */
}

void funkcja1(int v1, int v2)
{ /* if:
   1. both switches pressed led1 is on,
   2. one of the switches is pressed led2 is on,
   3. otherwise both leds are off.
  */
  // both values are true/high (when switch is pressed value is set to LOW, so LOW values are sent to the function)
  // we should invert both values before check
  if (!v1 && !v2)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
  }
  else if (!v1 || !v2)
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
  }
  else
  {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }

}