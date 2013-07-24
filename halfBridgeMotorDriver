int input1 = 9; 
int input2 = 8; 


void setup() {
 
  pinMode(input1,OUTPUT);
  pinMode(input2,OUTPUT);
  

}

void loop() {  
}

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

