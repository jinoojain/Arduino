//MotorTest

int pwmPin = 9; // PWM for our single motor for now
int dirPin = 8; // toggle direction


void setup() {
 
  //pinMode(pwmPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
  
  Serial.begin(9600);
  
}
void loop() {  
  analogWrite(pwmPin, 150);
  //digitalWrite(pwmPin,HIGH);
  digitalWrite(dirPin,HIGH);

  delay(300);
}
