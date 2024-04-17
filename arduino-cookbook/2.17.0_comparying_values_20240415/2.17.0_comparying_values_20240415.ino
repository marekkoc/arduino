/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.17: page:81

Sketch: switch statement
Wiring: ---

* RelationalExpressions sketch
* demonstrates comparing values
*

 
* My modification:
* oryginal code 

MK:
C:2024.04.15
M:2020.04.15
*/

int i = 1; // some values to start
int j = 2;


void setup()
{
 Serial.begin(9600); // initialize serial port to send and receive at 9600 bound
}

void loop()
{
  Serial.print(" i = ");
  Serial.print(i);
  Serial.print(" and j = ");
  Serial.println(j);

  if(i < j) Serial.println(" i is less than j");
  if(i <= j) Serial.println(" i is less than or equal than j");
  if(i != j) Serial.println(" i is not equal to j");
  if(i == j) Serial.println(" i is equal to j");
  if(i >= j) Serial.println(" i is greater or equal to j");
  if(i > j) Serial.println(" i is greater than j");

  Serial.println();
  i = i + 1;
  if(i > j+1)
  {
    delay(10000); // long delay after i is no loger close to j
  }
  else
  {
    delay(1000); // short delay
  }
}
