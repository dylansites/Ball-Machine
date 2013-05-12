#include <Servo.h>

const int servoPin = 5;
//const int switchPin = 7;
const int potPin = A0;
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
  
  int potVal = analogRead(potPin);
  int servoAngle = map(potVal, 0, 1023, 60, 120);
  toyServo.write(servoAngle);
  delay(45);
  
  /*
  delay(5000);
  Serial.println("I am at 110");
  toyServo.write(110);
  delay(5000);
  Serial.println("I am at 60");
  toyServo.write(60);
  delay(5000);
  */
}
