/*
Book: 2020#Margolis_Arduino-Cookbook.pdf; page: 26

* Blink with photoresistor sketch

MK:
C:2024.02.09
M:2020.03.13
*/

const int sensorPin = A0;

// connect sensor to analog input 0/home/marek/Desktop/bil-KOPIA/765166_87288-_codes.ino
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600); // open the serial port at 9600 bps:
}


// enable output on the led pin
void loop() {
  int delayval = analogRead(sensorPin);  // read the analog input
  Serial.println(delayval);


  digitalWrite(LED_BUILTIN, HIGH);

  // set the LED on
  delay(delayval);
  // delay is dependent on light level
  digitalWrite(LED_BUILTIN, LOW);
  // set the LED off
  delay(delayval);
}
