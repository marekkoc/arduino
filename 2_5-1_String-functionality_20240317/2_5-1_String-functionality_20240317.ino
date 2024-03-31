/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.5: page:50

Sketch: Arduino String functionaliy

* Basic_Strings sketch
 
* My modification:
* oryginal book version


MK:
C:2024.03.17
M:2020.03.17
*/

String text1 = "This text";
String text2 = " has more characters";
String text3; // to be assigned with the sketch

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  while(!Serial){;}; // Wait for serial port (Leonardo, 32-bit boards), page:119

  Serial.print("text 1 is ");
  Serial.print(text1.length());
  Serial.println((" characters long"));

  Serial.print("text2 is ");
  Serial.print(text2.length());
  Serial.println(" characters long.");

  text1.concat(text2);
  Serial.println("text1 now contains: ");
  Serial.println(text1);

  text3 = text1 + " and more";
  Serial.println(text3);

  /* Moje modyfikacje */
  Serial.println();
  Serial.println(text1);

  Serial.print("The occurrance of \"T\" is: ");
  Serial.println(text1.indexOf('T'));

  Serial.print("The occurrance of \"t\" is: ");
  Serial.println(text1.indexOf('t'));

  Serial.print("The last occurrance of \"t\" is: ");
  Serial.println(text1.lastIndexOf('t'));

  Serial.print("The occurrance of \"t\" is: ");
  Serial.println(text1.indexOf('t'));

}

void loop() {
  // put your main code here, to run repeatedly:

}
