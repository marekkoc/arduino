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
C:2024.04.16
M:2020.04.16
*/

String word1 = String("Hello");
char word2[] = "word";

void setup()
{
 Serial.begin(9600); // initialize serial port to send and receive at 9600 bound
}

void loop()
{
  Serial.print("word1.charAt(0) = ");
  Serial.println(word1.charAt(0));

  Serial.print("word1[0] = ");
  Serial.println(word1[0]);

  Serial.print("word1[0] == word1.charAt(0) ===> ");
  Serial.println(word1[0] == word1.charAt(0));
  Serial.println();

  delay(20000);
}
