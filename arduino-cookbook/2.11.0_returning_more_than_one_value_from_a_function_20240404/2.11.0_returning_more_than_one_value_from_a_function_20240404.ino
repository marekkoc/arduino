/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.11: page:68

Sketch: Returning more than one value from a function - Solution 1 - with global values

* swap sketch
* demonmstrating changing two walues using global variables

 
* My modification:
* oryginal code 

MK:
C:2024.04.04
M:2020.04.04
*/

int x; // x and y are global variables
int y;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  x = random(10); // pick dome random numbers
  y = random(10);

  Serial.print("The value of x and y before swapping are: ");
  Serial.print(x); Serial.print(", "); Serial.println(y);
  swap();

  Serial.print("The value of x and y after swapping are: ");
  Serial.print(x); Serial.print(", "); Serial.println(y); Serial.println();

  delay(1000);
}

//swap the two global values
void swap()
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}
