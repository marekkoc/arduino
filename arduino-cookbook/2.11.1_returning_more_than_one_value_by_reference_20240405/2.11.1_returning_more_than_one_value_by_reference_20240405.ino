/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.11: page:69

Sketch: Returning more than one value from a function - Solution 2 - by reference
* functionReferences sketch
* demonmstrating returning more than one value by passing references

 
* My modification:
* oryginal code 

MK:
C:2024.04.05
M:2020.04.05
*/

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int x = random(10); // pick dome random numbers
  int y = random(10);

  Serial.print("The value of x and y before swapping are: ");
  Serial.print(x); Serial.print(", "); Serial.println(y);
  swapRef(x,y);

  Serial.print("The value of x and y after swapping are: ");
  Serial.print(x); Serial.print(", "); Serial.println(y); Serial.println();

  delay(1000);
}

//swap the two given values
void swapRef(int &value1, int &value2)
{
  int temp;
  temp = value1;
  value1 = value2;
  value2 = temp;
}
