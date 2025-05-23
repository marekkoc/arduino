/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 11.2.0: page:420

Sketch: Liquid Crystal Display Library - Formatting text
Wiring: p.417

 My modification:
* moja modyfikacja: chce wyswieltac cyferki obok siebie i z czyszczeniem ekranu

MK:
C:2024.05.03
M:2020.05.03


  LiquidCrystal Library - Hello World

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

int count; // a variable
int curPos; // current character position

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; // connection the function with Arduino pin number
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(numCols, numCols);
  // Print a message to the LCD.
  lcd.print("Starting in "); // this string is 12 characters long
  for (int i = 9; i > 0; i--)
  {
    // the top line is row 0
    lcd.setCursor(12,0); // move the cursor to the end of the string
    lcd.print(i);
    delay(1000);
  }
}

void loop() 
{
  lcd.clear();

  lcd.setCursor(curPos, 0);
  count++;
  curPos++;
  lcd.print(count);
 
  delay(1000);
}

