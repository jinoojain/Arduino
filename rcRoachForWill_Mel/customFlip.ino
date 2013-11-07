// code to control the custom flip

void customFlip(int motorSpeed, int servoSpeed, boolean motorDirection, int servoStart, int servoEnd) {

  // code for the motors
  if (motorDirection == true){ //BACKWARDS
    analogWrite(input2, 255- motorSpeed);
    digitalWrite(input1, HIGH);
  }
  if (motorDirection ==false){ //FORWARDS
    analogWrite(input2, motorSpeed);
    digitalWrite(input1, LOW);
  }
  // code for the servos 
  int pos;
  for(pos = servoStart; pos < servoEnd; pos += 1){ // goes from 0 degrees to 180 degrees in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    myservo2.write(180-pos);
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = servoEnd; pos>=servoStart; pos-=1){     // goes from 180 degrees to 0 degrees                               
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    myservo2.write(180-pos);
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
}


