/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.21: page:89

Sketch: Combining operations and assignments
Wiring: ---.

* Use compound operators
* 
* value >>= 2; shift value fight two places
* value <<= 2; shift value left two plades
* mask &= 2; mask = mask & 2; binary-and mask with 2
* mask |= 2; mask = maks | 2; binary-or mask with 2
*
 
* My modification:
* oryginal code 

MK:
C:2024.04.19
M:2020.04.19
*/

int val = 2;

void setup()
{
  Serial.begin(9600);  

  Serial.println(36.3/3, 7);
}

void loop()
{
  zeroPadding(val);
  val++;
  val = val % 4;

  delay(1000);

}


void zeroPadding(int number)
{
  // Check the size and print accordingly with padding
  if (number < 2)
  { // Less than 2 means it would be 1 or 0 (1-bit or less)
    Serial.print("000");
  } 
  else if (number < 4)
  { // Less than 4 means it would be 2 or 3 (2-bits)
    Serial.print("00");
  }
  else if (number < 8)
  { // Less than 8 means it would be 4 to 7 (3-bits)
    Serial.print("0");
  }

  Serial.println(number, BIN);
}

