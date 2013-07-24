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
   
   // FORWARD CONTROLS
   if (value=='q'||value=='w'||value=='e'){
     digitalWrite(dirPin, HIGH);
     if (value=='q'){
       analogWrite(pwmPin, 50);
       Serial.println("Forward slow");
     }
     if (value=='w'){
       analogWrite(pwmPin, 100);
       Serial.println("Forward moderate");
     }
     if (value=='e'){
       analogWrite(pwmPin, 200);
       Serial.println("Forward fast");
     }
   }
   
   // BACKWARDS CONTROLS
   else if (value=='a'||value=='s'||value=='d'){
     digitalWrite(dirPin, LOW);
     if (value=='a'){
       analogWrite(pwmPin, 50);
       Serial.println("Backwards slow");
     }
     if (value=='s'){
       analogWrite(pwmPin, 100);
       Serial.println("Backwards moderate");
     }
     if (value =='d'){
       analogWrite(pwmPin, 200);
       Serial.println("Backwards fast");
     }
   }
   
   //STOP
   else if (value == 'x'){
     digitalWrite(dirPin, HIGH);
     analogWrite(pwmPin,0);
     Serial.println("Stop");
   }
   
   //UNRECOGNIZED COMMAND
   else if (value!='q'||value!='w'||value!='e'||value!='a'||value!='s'||value!='d'||value!='x'){
     Serial.println("Unknown Command");
   }
  }    // end while
}
