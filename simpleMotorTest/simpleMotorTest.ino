//MotorTest

int pwmPin = 9; // PWM for our single motor
int dirPin = 8; // toggle direction


void setup() {
 
  pinMode(pwmPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
  

}
void loop() {  
    analogWrite(pwmPin, 90);
  //digitalWrite(pwmPin,HIGH);
  digitalWrite(dirPin,HIGH);  

  delay(300);
}
