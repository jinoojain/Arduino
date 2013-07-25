//rcRoach

// combine all code to remote control movement on the ROBO explorer

int input1 = 10; 
int input2 = 11; 


void setup() {
  pinMode(input1,OUTPUT);
  pinMode(input2,OUTPUT);  
  Serial.begin(9600);
  
}
void loop() {  
    getCommand();  
}
