//MotorTest

int pwmPin = 6; // PWM for our single motor for now
int dirPin = 8; // toggle direction
int value = 0;

int power;
void setup() {
 
  pinMode(pwmPin,OUTPUT);
  pinMode(dirPin,OUTPUT);
  
  Serial.begin(9600);
  
}
void loop() {  
  
  if(Serial.available()){
   value = Serial.read();
   
   
   if(value >= 0 && value <= 255){
      analogWrite(pwmPin, value);
      digitalWrite(dirPin,HIGH);
   }
   else if (value < 0 && value >= -255){
      analogWrite(pwmPin, value);
      digitalWrite(dirPin,LOW);
   }
   else{
     Serial.println("please pick valid value");
   }
   
  }// end if
  
  Serial.print("inputed value: ");
  Serial.println(value);
  delay(300);
}
