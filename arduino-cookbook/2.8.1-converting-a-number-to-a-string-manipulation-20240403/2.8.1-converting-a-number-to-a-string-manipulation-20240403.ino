/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.8: page:59-60

Sketch: Convertng a number to a string

* Nmber to string
* Creates a string from a given number 
 
* My modification:
* string manipulation based on examples given in the book chapter but not included to the sketch.

MK:
C:2024.04.03
M:2020.04.03
*/

char buffer[12]; // Long data type has 11 characters (including the minus sign)
                // and a termnating null


void setup()
{
  Serial.begin(9600);
  while(!Serial);

  long value = 12345;
  ltoa(value, buffer, 10);

  Serial.print(value);
  Serial.print(" has ");
  Serial.print(strlen(buffer));
  Serial.println(" digits");

  value = 123456789;
  ltoa(value, buffer, 10);

  Serial.print(value);
  Serial.print(" has ");
  Serial.print(strlen(buffer));
  Serial.println(" digits");


  Serial.println("Three ways of creating of a String. NOT(!) printed to Serial Monitor!");
  // 1
  String myNumber = String(100);

  // 2
  int value0 = 127;
  String myReadout0 = "The reading was ";
  myReadout0.concat(value0);

  // 3
  int value1 = 127;
  String myReadout1 = "The reading was ";
  myReadout1 += value1;





}

void loop() {
  // put your main code here, to run repeatedly:

}
