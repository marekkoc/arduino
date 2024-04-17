/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.18: page:84

Sketch: 
Wiring: ---

* Compare two strings - function strcmp()
* C character strings!
*

 
* My modification:
* oryginal code 

MK:
C:2024.04.16
M:2020.04.16
*/

char string1[] = "left";
char string2[] = "leftright";

int cmp1; // value with coparasion result
int cmp2; // value with coparasion result


void setup()
{
 Serial.begin(9600); // initialize serial port to send and receive at 9600 bound
}

void loop()
{
  cmp1 = strcmp(string1, string2); // compare all strings
  cmp2 = strncmp(string1, string2, 4); // compare only the first 4 charactes

  if (cmp1 < 0) Serial.println("The first string is bigger!");
  else if (cmp1 == 0) Serial.println("Strings are equal!");
  else Serial.println("The second string is bigger!");
  Serial.println("********************");

   if (cmp2 < 0) Serial.println("The first string is bigger!");
  else if (cmp2 == 0) Serial.println("Strings are equal!");
  else Serial.println("The second string is bigger!");
  Serial.println("********************");
  Serial.println();
   


  delay(10000);
}
