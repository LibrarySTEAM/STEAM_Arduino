
int buttonPin = 2;  // the pin number for button
int ledPin = 13; // LED on pin 13

void setup() {        
  digitalWrite(buttonPin, LOW); //make sure pin is low 
  pinMode(ledPin, OUTPUT); 
}


void loop() {

  if (digitalRead(buttonPin) == HIGH) { //when button the Arduino gets a 5 volt signal
    digitalWrite(ledPin, HIGH);         //and we turn on the led   
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}

