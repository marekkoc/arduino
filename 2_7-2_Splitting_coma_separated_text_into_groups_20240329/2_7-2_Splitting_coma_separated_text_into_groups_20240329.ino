/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.7: page:58 

Sketch: Splitting-comma-separated-textinto-groups. (ver 2)


* SplitText sketch
* split a comma-separated string
* second version of the script, with the use of low-level functions from C library.
 
* My modification:
* my modification, just to play with it


MK:
C:2024.03.31
M:2020.03.31
*/

const int MAX_STRIN_LEN = 20; //set this to the largest string you will process
char  stringList[] = "Peter;Paul,Mary"; // an example string
char stringBuffer[MAX_STRIN_LEN+1]; // static buffer for computation/output


void setup()
{
  Serial.begin(9600);
  while(!Serial); // Wait for serial port (Leonardo, 32-bit boards)
  
  char *str;
  char *p;

  strncpy(stringBuffer, stringList, MAX_STRIN_LEN); // copy source string to stringBuffer, 
  Serial.println(stringBuffer); // show the source string, containted in the buffer now

  for( str=strtok_r(stringBuffer, ",", &p); // split using comma,
       str;                                 // while str in snot null
       str=strtok_r(NULL, ",", &p))         // get subsequent tokens
  {
    Serial.println(str);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
