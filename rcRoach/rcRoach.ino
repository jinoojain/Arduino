//rcRoach

#include <Wire.h>
#include <LSM303.h>
#include <L3G.h>
#include <Servo.h>


// combine all code to remote control movement on the ROBO explorer
// choose no line ending in the serial monitor. This way, the enter doesn't get parsed as a char command
int input1 = 10; 
int input2 = 11; 

Servo myservo;
L3G gyro;
LSM303 compass;

// init position
int pos = 0;

void setup() {
  myservo.attach(9);
  pinMode(input1,OUTPUT);
  pinMode(input2,OUTPUT);  
  Serial.begin(9600);
  
  // initialize gyro and accel
   if (!gyro.init()){
    Serial.println("Failed to autodetect gyro type!");
    while (1);
  }
  
  gyro.enableDefault();
  compass.init();
  compass.enableDefault();
  
}
void loop() {  
    // read from the serial buffer
    getCommand();  
    
    // read values from our gyros and stuff
    compass.read();
    gyro.read();
    
    //printNeatly();
    
}
