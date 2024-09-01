/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 17.11.0: page:317

Sketch: SevenSegment sketch
Shows numerals ranging from 0 through 9 on a single display
This example counts seconds from 0 to 9

Wiring: p.319

 My modification:
* oryginal code

MK:
C:2024.05.06
M:2020.05.06  
*/

//biths representing segmenting segments A through G (and decimal point) for numerals 0-9
const byte numeral[10] = 
{
  // ABCDEFG+dp
  B11111100, // 0
  B01100000, // 1
  B11011010, // 2
  B11110010, // 3
  B01100110, // 4
  B10110110, // 5
  B10111110, // 6
  B11100000, // 7
  B11111110, // 8
  B11110110, // 9
};

// pins for decimal point and each segment
//                         dp,G,F,E,D,C,B,A
const int segmentPins[8] = {5,8,9,7,6,4,3,2};

void setup()
{
 for(int i=0; i<8; i++)
 {
  pinMode(segmentPins[i], OUTPUT); // set segment and DP pins to output
 }
}

void loop() 
{
  for(int i=0; i<=10; i++)
  {
    showDigit(i);
    delay(1000);
  }  
  // the last value if i is 10 and this will turn the display off
  delay(2000); // pause two seconds with the display off
}

// Displays a number from - throuht 0 on 7-segment display
// any value not within the range of 0-9 turns the display off
void showDigit(int number)
{
  bool isBitSet;

  for(int segment =1; segment <8; segment++)
  {
    if(number<0 || number >9)
    {
      isBitSet = 0; // turn off all segments
    }
    else
    {
      // isBitSet will be true if given bit is 1
      isBitSet = bitRead(numeral[number], segment);
    }
    isBitSet = !isBitSet; // remove this line fi common cathode display
    digitalWrite(segmentPins[segment], isBitSet);
  }
}