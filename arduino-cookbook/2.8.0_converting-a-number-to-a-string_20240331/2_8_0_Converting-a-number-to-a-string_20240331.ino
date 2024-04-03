/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.8: page:59

Sketch: Convertng a number to a string

* Nmber to string
* Creates a string from a given number 
 
* My modification:
* oryginal example

MK:
C:2024.03.31
M:2020.03.31
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
}

void loop() {
  // put your main code here, to run repeatedly:

}
