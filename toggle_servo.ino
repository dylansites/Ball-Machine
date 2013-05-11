#include <Servo.h>

const int servoPin = 5;
const int servoPause = 45;
const int togglePin = 3;

int pos1 = 100;
int pos2 = 68;

Servo toyServo;

void setup(){
  pinMode(togglePin, INPUT);
  Serial.begin(9600);
  toyServo.attach(servoPin);
  toyServo.write(pos1);
}

void loop(){
  int toggleVal = digitalRead(togglePin);
  if (toggleVal == HIGH){
    toyServo.write(pos2);
    }
  else if (toggleVal == LOW){
    toyServo.write(pos1);
    }
  delay(1);
}



