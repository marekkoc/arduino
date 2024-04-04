/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.10: page:64

Sketch: Structuring your code into functional blocks - Functions

* blink 3
* Demonstrates calling a function with a parameter and returning a value.
* 
* The LED flashes when the program starts and stops when a switch connected to digital pin 2 is pressed. 
* The program prints the number of times that the LED flashes.
 
* My modification:
* I added some print functions to chect how exactly count LED blinks number. As printed blink number is bigger than my visual counting. 


MK:
C:2024.04.04
M:2020.04.04
*/

const int inputPin = 2; // input pin for the switch

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(inputPin, INPUT);
  digitalWrite(inputPin, HIGH); // use internal pull-up resistor (Recipe 5.2)
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Press and hold switch to stop blinking");
  int count = blink3(1000); // blink the LED 250 ms on and 250 ms off
  Serial.print("The number of times the LED blinked was ");
  Serial.println(count);
  Serial.println("*****************************");

  while(digitalRead(inputPin) == LOW);
  {
    // do nothing until they let go of the button
    Serial.println("The button was pressed down --->>> The program was on hold.");
  }
}


//blink a LED using the given delay period
// return the number of times the LED flashed
int blink3(int period)
{
  Serial.println("Enter ***blink3() function***");
  int blinkCount = 0;
  while(digitalRead(inputPin) == HIGH) // repeat until switch is pressed (it will go LOW when pressed
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(period); // wait for half the blink period
    digitalWrite(LED_BUILTIN, LOW); 
    delay(period); // wait for the other half 
    blinkCount += 1; // increment the count
    Serial.print(blinkCount);
    Serial.print(" ");
  }
  //e here when inputPin is no longer HIGH (means the switch is pressed)
  Serial.println();
  Serial.println("EXIT from ***blink3() function***");
  return blinkCount; // this value will be returned
}