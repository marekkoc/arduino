/*
*************************************
Cel: Zaznajomić się z działaniem PWM

Książka: 2015#Monk_Arduino-dla-poczatkujacych-kolejny-krok.pdf
Kod z ksiązki: 07_01_pwm
Zadanie: W porcie szeregowym wpisywać wartości całkowite z przedziału 0-255 i odczytywać wartości analogowe napięcia stałego za pomocą miernika cyfrowego.


Temat: PWM - Puls Witth Modulation



Modyfikacja: 

C: 2024.07.22
M: 2024.07.22
*************************************
*/
int pwmPin = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(pwmPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    int dutyCycle = Serial.parseInt();
    analogWrite(pwmPin, dutyCycle);
    Serial.print(dutyCycle);
    Serial.println();
    delay(500);
  }

}
