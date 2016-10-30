


int buttonPin = 2;  // the pin number for button
int ledPin = 13; // LED on pin 13


void setup() {        
  digitalWrite(buttonPin, LOW); //make sure pin is low 
  pinMode(buttonPin, INPUT_PULLUP);//tell Arduino to use pullup resistor (will now be HIGH, it has been pulled up!)
  pinMode(ledPin, OUTPUT); 
}


void loop() {

  if (digitalRead(buttonPin) == LOW) { //the button now begins HIGH so when we press it it goes LOW
    digitalWrite(ledPin, HIGH);        //so when LOW we say "turn ON the light"   
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}




