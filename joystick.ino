#include <Servo.h>

const int servoPin = 5;
const int servoPause = 45;
const int potPin = 0;

int LR = 0;

Servo toyServo;

void setup(){
  Serial.begin(9600);
  toyServo.attach(servoPin);
}

void loop(){
  int LR = analogRead(potPin)/4;
  int servoAngle = map(LR, 0, 255, 60, 120);
  Serial.println(servoAngle);  
  toyServo.write(servoAngle);

  delay(servoPause);
}


