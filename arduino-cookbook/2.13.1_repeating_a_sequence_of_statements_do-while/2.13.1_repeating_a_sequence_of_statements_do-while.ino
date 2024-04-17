/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.13: page:73

Sketch: Repeating a sequence of statemets - DO-WHILE loop
Wiring: There is no information about wiring in the text. Probably the same as with photoresistor. (p. 23)

* Repeat blinks while a condition is true
* 
 
* My modification:
* Change a while() loop to Do-while() loop.
* The commands to do will be executed at least one time, as do{} part is executed before condition is checked. 
* So it even a condition is not meet, do{} will be executed at least one time.
* blink() - delay as a function parameter
*
* UWAGA: NIE WIEM CZEMU, ALE TEN KOD CHYBA NIE DZIALAL POPRAWNIE!!!!
*         DIODA CAŁY CZAS MIGAŁA.


MK:
C:2024.04.15
M:2020.04.14
*/

const int sensorPin = A0; // analog input 0

void setup()
{
 Serial.begin(9600);
 pinMode(LED_BUILTIN, OUTPUT); // enable LED pin as output
}

void loop()
{
  do
  {
    blink(500); // call the function to trun the LED on and off
    Serial.print(".");
  }
  while(analogRead(sensorPin) > 500);

  Serial.print(analogRead(sensorPin)); // this is not exectured until after the while loop finishes!!!
  Serial.print(";");
}

void blink(int msec)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(msec);
  digitalWrite(LED_BUILTIN, LOW);
  delay(msec);
}

