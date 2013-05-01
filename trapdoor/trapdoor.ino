#include <Servo.h>

const int servoPin = 5;
const int switchPin = 7;
const int servoPause = 100;

Servo toyServo;

void setup(){
  pinMode(switchPin, INPUT);
  toyServo.attach(servoPin);
}

void loop(){
  int switchVal = digitalRead(switchPin);
  if(switchVal == HIGH){  
    delay(servoPause);
    toyServo.write(180);
    delay(servoPause);
  }
  if(switchVal == LOW){
   delay(servoPause);
  toyServo.write(90);
  delay(servoPause); 
  }
}
