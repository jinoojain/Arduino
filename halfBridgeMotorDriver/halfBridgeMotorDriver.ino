int input1 = 10; 
int input2 = 11; 


void setup() {
 
  pinMode(input1,OUTPUT);
  pinMode(input2,OUTPUT);
  

}

void loop() {  
  
  //motorOutput(255,true);
    analogWrite(input1, 150);
    digitalWrite(input2, LOW);
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

