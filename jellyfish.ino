#include <Servo.h>

Servo myservo;

int pos = 0;

int ledPin = 5;  
int ledPin2 = 3;

void setup() {

  myservo.attach(9);

  pinMode(ledPin, OUTPUT);   
  pinMode(ledPin2, OUTPUT);
 
}

void loop() {

  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {

    analogWrite(ledPin, fadeValue);
    delay(20);
  }

    for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(30);
  }

  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {

    analogWrite(ledPin, fadeValue);
    delay(30);
  }

  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
    
    analogWrite(ledPin2, fadeValue);
    delay(30);
  }

    for (pos = 180; pos >= 0; pos -=1) {
    myservo.write(pos);
    delay(30);
  }

  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
  
    analogWrite(ledPin2, fadeValue);
    delay(40);
  }

}
  