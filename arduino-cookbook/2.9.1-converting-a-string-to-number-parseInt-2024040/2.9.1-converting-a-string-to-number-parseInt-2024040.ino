/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.9: page:61

Sketch: Convertng a String to a number

* String to a number
* Creates a number from a String
 
* My modification:
* oryginal example - Version nr 2 with the use of Serial.parseInt() function

* Warning!
* After you uploade the sketch, open the Serial Monitor and type some numeric characters, then press Enter/Return.
* Type in 5 digits in a row and then press Enter at the end (one Enter after 5 digits)!

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
    int newValue = Serial.parseInt();
    if (newValue != 0)
    {
      blinkDelay = newValue;
      Serial.print("New delay: ");
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