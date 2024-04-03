/*
Book: 2020#Margolis_Arduino-Cookbook.pdf

* Blink with photoresistor sketch

MK:
C:2024.02.09
M:2020.02.09
*/

const int sensorPin = A0;

// connect sensor to analog input 0
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}


// enable output on the led pin
void loop() {
  int delayval = analogRead(sensorPin);  // read the analog input

  digitalWrite(LED_BUILTIN, HIGH);

  // set the LED on
  delay(delayval);
  // delay is dependent on light level
  digitalWrite(LED_BUILTIN, LOW);
  // set the LED off
  delay(delayval);
}
