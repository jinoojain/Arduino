//rcRoach
// disable all sensing. only have RC 
#include <Wire.h>

#include <Servo.h>


// combine all code to remote control movement on the ROBO explorer
// choose no line ending in the serial monitor. This way, the enter doesn't get parsed as a char command
int input1 = 10; 
int input2 = 11; 

Servo myservo;
Servo myservo2;

// init position
int pos = 0;

void setup() {
  myservo.attach(6);
  myservo2.attach(5);
  pinMode(input1,OUTPUT);
  pinMode(input2,OUTPUT);  
  Serial.begin(9600);
  


  
}
void loop() {  

    getCommand();  

}
