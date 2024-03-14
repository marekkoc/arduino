
const int ldrPin = A0;

String inputString = "";          // user input: distance (mm)
bool stringComplete = false;      // whether the string is complete

void setup() {
  // put your setup code here, to run once:
  Serial.begin( 9600 );
  pinMode(ldrPin, INPUT);
  inputString.reserve(10);
}

void loop() {
  
  if (stringComplete) {


    
    // put your main code here, to run repeatedly:
    int ldrvalue = analogRead(ldrPin);

    Serial.print(inputString);
   Serial.print(" ");
    Serial.println(ldrvalue);

    /* reset user input */
    inputString = "";                       // clear input string
    stringComplete = false;                 // set flag to flase
  }

}


void serialEvent() {
  while (Serial.available()) {
    char inChar = (char)Serial.read();
    if (inChar == '\n') {
      stringComplete = true;
    }
    else {
      inputString += inChar;
    }
  }
}
  
