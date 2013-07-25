// code to control the motors. 
// currently set up to work with the Pololu - DRV8833 motor driver

void motorOutput(int speed, boolean direction) {

// code for the half bridges
  
  if (direction == true){
    analogWrite(input1, speed);
    digitalWrite(input2, LOW);
  }
  else{
    analogWrite(input2, speed);
    digitalWrite(input1, LOW);
  }
}
