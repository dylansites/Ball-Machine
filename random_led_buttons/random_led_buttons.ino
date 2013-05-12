
const int switchPin = 13;
const int switchPin2 = 12;
const int switchPin3 = 11;
const int switchPin4 = 10;
const int ledPin = 5;
const int ledPin2 = 4;
const int ledPin3 = 3;
const int ledPin4 = 2;

int value;

int motors[] = {
  1, 2, 3, 4};

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(switchPin, INPUT);
  pinMode(switchPin2, INPUT);
  pinMode(switchPin3, INPUT);
  pinMode(switchPin4, INPUT);
  Serial.begin(9600);
}

void loop(){
  int switchVal = digitalRead(switchPin);
  int switchVal2 = digitalRead(switchPin2);
  int switchVal3 = digitalRead(switchPin3);
  int switchVal4 = digitalRead(switchPin4);
  if(switchVal == HIGH){
    digitalWrite(ledPin, HIGH);
    //shuffle starts
    for(int t=0; t<4; t++){
      motors[t] = 0;
    }
    for(int i=0; i<4; i++){
      motors[i] = random(1,5);
      if(i == 1){
        if(motors[i] == motors [0]){
          while(motors[i] == motors[0]){
            motors[i] = random(1, 5);
          }
        }
      }
      if(i == 2){
        int marks = 1;
        while(marks > 0){
          marks = 0;
          if(motors[i] == motors[0]){
            motors[i] = random(1, 5);
            marks = marks + 1;
          }
          if(motors[i] == motors[1]){
            motors[i] = random(1, 5);
            marks = marks + 1;
          }

        }
      }
      if(i == 3){
        int marks = 1;
        while(marks > 0){
          marks = 0;
          if(motors[i] == motors[0]){
            motors[i] = random(1, 5);
            marks = marks + 1;
          }
          if(motors[i] == motors[1]){
            motors[i] = random(1, 5);
            marks = marks + 1;
          }
          if(motors[i] == motors[2]){
            motors[i] = random(1, 5);
            marks = marks + 1;
          }
        }
      }
    }

    for( int b = 0; b < 4; b ++){
      Serial.println(motors[b]);
    }
    Serial.println("/////////");
  }
  if(switchVal2 == HIGH){
    value = motors[0];
    switch(value){
      case 1:
        digitalWrite(ledPin2, HIGH);
        break;
      case 2:
        digitalWrite(ledPin3, HIGH);
        break;
      case 3:
        digitalWrite(ledPin4, HIGH);
        break;
      case 4:
        digitalWrite(ledPin, HIGH);
        break;
    }
  }
  if(switchVal3 == HIGH){
    value = motors[1];
    switch(value){
      case 1:
        digitalWrite(ledPin2, HIGH);
        break;
      case 2:
        digitalWrite(ledPin3, HIGH);
        break;
      case 3:
        digitalWrite(ledPin4, HIGH);
        break;
      case 4:
        digitalWrite(ledPin, HIGH);
        break;
    }
  }
  if(switchVal4 == HIGH){
    value = motors[2];
    switch(value){
      case 1:
        digitalWrite(ledPin2, HIGH);
        break;
      case 2:
        digitalWrite(ledPin3, HIGH);
        break;
      case 3:
        digitalWrite(ledPin4, HIGH);
        break;
      case 4:
        digitalWrite(ledPin, HIGH);
        break;
    }
  }
  else{
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
  }
}












