/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.20: page:86

Sketch: bitwise operations
Wiring: ---.

* bits sketch
* demonstrates bitwise operations

 
* My modification:
* oryginal code 

MK:
C:2024.04.17
M:2020.04.17
*/

void setup()
{
  Serial.begin(9600);

  Serial.print("3 & 1 equals "); // bitwise AND 3 and 1
  Serial.print(3 & 1);  // prints the result
  Serial.print(" decimal, or in binary: "); 
  Serial.println(3 & 1, BIN); // print the binary representation of the result

  Serial.print("3 | 1 equals "); // bitwise OR 3 and 1
  Serial.print(3 | 1);
  Serial.print(" decimal, or in binary: "); //
  Serial.println(3 | 1, BIN); // print the binary representation ofthe result

  Serial.print("3 ^ 1 equals "); // bitwise EXCLUSIVE OR 3 and 1;
  Serial.print(3 ^ 1);
  Serial.print(" decimal, or in binary: ");
  Serial.println(3 ^ 1, BIN);
  Serial.println();

  byte byteVal = 1;
  int  intVal = 1;

  byteVal = ~byteVal; // do bitwise negate
  intVal = ~intVal;

  Serial.print("~byteVal (1) equals "); // bitwise negate an 8-bit value
  Serial.println(byteVal, BIN); // print the binary representation of the result
  Serial.print("~intVal (1) equals "); // bitwise negate a 16-bit value
  Serial.println(intVal, BIN); //print the binary representation of the result 
}

void loop()
{

}
