/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.16: page:79

Sketch: switch statement
Wiring: ---

* SwitchCase sketch
* example showing switch statement by switching on chars from the serial port
*
* sending the character 1 blinks the LED once,
* sending the character 2 blinks twice,
* sending "+" turns the LED on,
* sending "-" turns the LED off,
* any other character prints a message to the Serial Monitor 


 
* My modification:
* oryginal code 

MK:
C:2024.04.15
M:2020.04.15
*/


void setup()
{
 Serial.begin(9600); // initialize serial port to send and receive at 9600 bound
 pinMode(LED_BUILTIN, OUTPUT); // enable LED pin as output
}

void loop()
{
  if(Serial.available()) // check to see if at least one character is available
  {
    char ch = Serial.read();
    switch (ch)
    {
      case '1':
        blink();
        break;
      case '2':
        blink();
        blink();
        break;
      case '+':
        digitalWrite(LED_BUILTIN, HIGH);
        break;
      case '-':
        digitalWrite(LED_BUILTIN, LOW);
        break;
      case 'q':
        Serial.println("Wcisnales q. Nareszcie!!!");
        break;
      case '\n': // new line, safe to ignore
        break;
      case 'r':  //carriage return, safe to ignore
        break;
      default:
        Serial.print(ch);
        Serial.println(" was received but not expected.");
        break;

    }
  }
}

void blink()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

