/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.7: page:56

Sketch: Splitting-comma-separated-textinto-groups

* SplitText sketch
* split a comma-separated string
 
* My modification:
* oryginal book version


MK:
C:2024.03.29
M:2020.03.29
*/

String text = "Peter,Paul,Mary"; // an example string
String message = text; // holds text not yet splt
int commaPosition; // the position of the next comma in the string

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial); // Wait for serial port (Leonardo, 32-bit boards)

  Serial.println(message); // show the source string
  do
  {
    commaPosition = message.indexOf(',');
    if(commaPosition != -1)
    {
      Serial.println((message.substring(0,commaPosition)));
      message = message.substring(commaPosition+1, message.length());
    }
    else
    {
      // here after the last comma is found
      if(message.length() > 0)
      Serial.println(message); // if there is thext after the last comms, print it
    }
  }
  while(commaPosition >= 0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
