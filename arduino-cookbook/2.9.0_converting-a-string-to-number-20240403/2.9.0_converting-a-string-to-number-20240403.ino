/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.9: page:61

Sketch: Convertng a String to a number

* String to a number
* Creates a number from a String
 
* My modification:
* oryginal example

* Warning!
* After you uploade the sketch, open the Serial Monitor and type some numeric characters, then press Enter/Return.
* * Type in 5 digits in a row and then press Enter at the end (one Enter after 5 digits)!

MK:
C:2024.04.03
M:2020.04.03
*/

int blinkDelay; // blink rate determined by this variable
char strValue[6]; // must be big enought to hold all the digits and the 0 thet terminates the string
int index = 0; // the index into the array storing the received digits]

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); // enable LED pin as output
}

void loop()
{
  if(Serial.available())
  {
    char ch = Serial.read();
    Serial.println(ch);
    if( index < 5 && isDigit(ch))
    {
      strValue[index++] = ch; // add the ASCII character to the string;
                              // this is a 6 elements (5 digits + NULL) vector of characters.
                              // In our case each char is a digit saves as a char i.e. "1", "2", "3",... 
    }
    else
    {
      // here when buffer full or on the first nondigit
      strValue[index] = 0; // terminate the string with a 0
      blinkDelay = atoi(strValue); // use atoi() to convert the string to an int
      index = 0;  
      Serial.print("blinkDelay = ");
      Serial.println(blinkDelay);    
    }
  }
  blink();
}

void blink()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blinkDelay/2); // wait for half the blink period
  digitalWrite(LED_BUILTIN, LOW); 
  delay(blinkDelay/2); // wait for the other half 
}