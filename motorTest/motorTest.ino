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
  
  while(Serial.available()){
   char value = Serial.read();
   
   if (value=='q'||value=='w'||value=='e'){
     digitalWrite(dirPin, HIGH);
     if (value=='q'){
       analogWrite(pwmPin, 50);
     }
     if (value=='w'){
       analogWrite(pwnPin, 100);
     }
     else{
       analogWrite(pwmPin, 200);
     }
   }
   if (value=='a'||value=='s'||value=='d'){
     digitalWrite(dirPin, LOW);
     if (value=='a'){
       analogWrite(pwmPin, 50);
     }
     if (value=='s'){
       analogWrite(pwnPin, 100);
     }
     else{
       analogWrite(pwmPin, 200);
     }
   }
   if (value == 'x'){
     digitalWrite(dirPin, HIGH);
     analogWrite(pwmPin,0);
   }
   else{
     Serial.println("Unknown Command");
   }
   
  }    // end while
  Serial.print("inputed value: ");
  Serial.println(value);
  
}



