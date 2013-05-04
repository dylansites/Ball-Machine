int dirpin = 8;
int steppin = 9;

void setup() 
{
  Serial.begin(9600);
pinMode(dirpin, OUTPUT);
pinMode(steppin, OUTPUT);
}
void loop()
{
  int i;
  digitalWrite(dirpin, LOW);     // Set the direction.
  delay(5000);
  for (i = 0; i<1000; i++)       // Iterate for 4000 microsteps.
  {
    digitalWrite(steppin, LOW);  // This LOW to HIGH change is what creates the
    digitalWrite(steppin, HIGH); // "Rising Edge" so the easydriver knows to when to step.
    delayMicroseconds(2500);      // This delay time is close to top speed for this
  }                              // particular motor. Any faster the motor stalls.
  digitalWrite(dirpin, HIGH);    // Change direction.
  delay(10000);
  for (i = 0; i<1000; i++)       // Iterate for 4000 microsteps
  {
    digitalWrite(steppin, LOW);  // This LOW to HIGH change is what creates the
    digitalWrite(steppin, HIGH); // "Rising Edge" so the easydriver knows to when to step.
    delayMicroseconds(8000);      // This delay time is close to top speed for this
  }   
  // particular motor. Any faster the motor stalls.
   digitalWrite(dirpin, LOW);    // Change direction.
  delay(10000);
  for (i = 0; i<1000; i++)       // Iterate for 4000 microsteps
  {
    digitalWrite(steppin, LOW);  // This LOW to HIGH change is what creates the
    digitalWrite(steppin, HIGH); // "Rising Edge" so the easydriver knows to when to step.
    delayMicroseconds(2500);      // This delay time is close to top speed for this
  }   
}
