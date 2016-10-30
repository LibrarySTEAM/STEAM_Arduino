#include <Servo.h> //--servo include


int buttonPin = 2;  // the pin number for button
int ledPin = 13; // LED on pin 13
int servoPin = 9; //--servo pin
Servo myServo;


void setup() {
  digitalWrite(buttonPin, LOW); //make sure pin is low
  pinMode(buttonPin, INPUT_PULLUP);//tell Arduino to use pullup resistor (will now be HIGH, it has been pulled up!)
  pinMode(ledPin, OUTPUT);
  myServo.attach(servoPin); //--setup pin for servo
}


void loop() {

  if (digitalRead(buttonPin) == LOW) { //the button now begins HIGH so when we press it it goes LOW
    digitalWrite(ledPin, HIGH);        //so when LOW we say "turn ON the light"
    myServo.write(90);  //--move servo 90 degrees
  }
  else {
    digitalWrite(ledPin, LOW);
    myServo.write(0); //--move servo back to zero
  }
}
