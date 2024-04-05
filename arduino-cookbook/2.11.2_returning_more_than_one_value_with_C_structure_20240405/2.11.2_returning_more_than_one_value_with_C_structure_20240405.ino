/*
Book: 2020#Margolis_Arduino-Cookbook.pdf
Chapter 2.11: page:70

Sketch: Returning more than one value from a function - Solution 3 - use a C structure

* struct sketch
* demonmstrating returning more than one value by using a struct

 
* My modification:
* oryginal code 

MK:
C:2024.04.05
M:2020.04.05
*/

struct Pair
{
  int a, b;
};

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //int x = random(10); // pick some random numbers
  //int y = random(10);

  struct Pair mypair = {random(10), random(10)};

  Serial.print("The value of x and y before swapping are: ");
  Serial.print(mypair.a); Serial.print(", "); Serial.println(mypair.b);
  mypair = swap(mypair);

  Serial.print("The value of x and y after swapping are: ");
  Serial.print(mypair.a); Serial.print(", "); Serial.println(mypair.b); Serial.println();

  delay(1000);
}

//swap the two given values
Pair swap(Pair pair)
{
  int temp;
  temp = pair.a;
  pair.a = pair.b;
  pair.b = temp;
  return pair;
}
