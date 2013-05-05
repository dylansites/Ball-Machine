#include <Servo.h>

const int servoPin = 5;
//const int switchPin = 7;
const int servoPause = 100;

Servo toyServo;

void setup(){
  Serial.begin(9600);
 // pinMode(switchPin, INPUT);
  toyServo.attach(servoPin);
}

void loop(){
  //int switchVal = digitalRead(switchPin);
 /* if(switchVal == HIGH){  
    delay(servoPause);
    toyServo.write(180);
    delay(servoPause);
  }
  if(switchVal == LOW){
   delay(servoPause);
  toyServo.write(90);
  delay(servoPause); 
  }*/
  delay(500);
  Serial.println("I am at 0");
  toyServo.write(0);
  delay(500);
  Serial.println("I am at 90");
  toyServo.write(90);
  delay(500);
  Serial.println("I am at 180");
  toyServo.write(180);
  delay(500);
}
