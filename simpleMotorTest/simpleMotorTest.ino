//MotorTest

int pwmPin = 6; // PWM for our single motor for now
int dirPin = 8; // toggle direction
int value;

int power;
void setup() {
 
  pinMode(pwmPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
  
  Serial.begin(9600);
  
}
void loop() {  
  analogWrite(pwmPin, 254);
  digitalWrite(dirPin,HIGH);

  delay(300);
}
