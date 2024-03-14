/*
Arduino reference quide (www): Function millis()

https://www.arduino.cc/reference/en/language/functions/time/millis/


Sketch: Prints time in miliseconds since the program started.

MK:
C: 2024.03.14
M: 2020.03.14
*/

unsigned long myTime;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Time [s]: ");
  myTime = millis() / 1000;

  Serial.println(myTime);
  delay(5000);
}
