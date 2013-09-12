// code to control the motors. 
// currently set up to work with the Pololu - DRV8833 motor driver

void motorOutput(int speed, boolean direction) {

// code for the half bridges
  
  if (direction == true){ //BACKWARDS
    analogWrite(input2, 255- speed);
    digitalWrite(input1, HIGH);
  }
  else{ //FORWARDS
    analogWrite(input2, speed);
    digitalWrite(input1, LOW);
  }
}
