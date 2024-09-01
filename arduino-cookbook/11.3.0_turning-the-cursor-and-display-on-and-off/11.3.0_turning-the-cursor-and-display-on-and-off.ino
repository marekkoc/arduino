/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 11.3.0: page:422

Sketch: Liquid Crystal Display Library - Turning the cursor and a display on and off
Wiring: p.417

 My modification:
* oryginal code

MK:
C:2024.05.03
M:2020.05.03


  LiquidCrystal Library - blinkign the display

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

*/

// include the library code:
#include <LiquidCrystal.h>

// constants for the mnumber of rows and columns in the LCD
const int numRows = 2;
const int numCols = 16;


// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; // connection the function with Arduino pin number
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(numCols, numCols);
  // Print a message to the LCD.
  lcd.print("Hello there! ;-)");
}

void loop() 
{
  lcd.setCursor(0,1);

  lcd.print("cursor blink");
  lcd.blink();
  delay(4000);

  lcd.clear();

  lcd.noBlink();
  lcd.print(" noBlink");
  delay(2000);

  lcd.clear();

  lcd.print("Display off...");
  delay(1000);
  lcd.noDisplay();
  delay(2000);

  lcd.display(); // tufn he display back on

  lcd.setCursor(0,0);
  lcd.print(" display flash !");
  displayBlink(2, 500); // blink twice
  displayBlink(2, 1500); // blikd twice for twice as long
  }

void displayBlink(int blinks, int duration)
{
  while(blinks--)
  {
    lcd.noDisplay();
    delay(duration);
    lcd.display();
    delay(duration);
  }
}
