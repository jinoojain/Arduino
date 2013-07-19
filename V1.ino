/****************************
* 7/16/2013
* Code for the cockroach
* accel/gyro/motor driving/wireless
* for the arduino mini: A4(SDA) A5(SCL)
* these pins are located by A2 and A3 (not on the main rails)
*
****************************/
#include <Wire.h>
#include <LSM303.h>
#include <L3G.h>

L3G gyro;
LSM303 compass;

int pwmPin = 6; // PWM for our single motor for now
int dirPin = 8; // toggle direction
void setup() {
  Serial.begin(9600);
  Wire.begin();
   
  pinMode(dirPin,OUTPUT);
  pinMode(pwmPin,OUTPUT);  
  
  analogWrite(pwmPin, 255);
  digitalWrite(dirPin,HIGH);
  
  if (!gyro.init()){
    Serial.println("Failed to autodetect gyro type!");
    while (1);
  }
  
  gyro.enableDefault();
  compass.init();
  compass.enableDefault();
  
}

void intAdjust(int i){
  if (i==0){
    Serial.print("0.0000");
  }
  if (i<10 && i>0){
    Serial.print((float)i,4);
  }
  if (i<0 && i>-10){
    Serial.print((float)i,3);
  }
  if (i>9 && i<100){
    Serial.print((float)i,3);
  }
  if (i<-9 && i>-100){
    Serial.print((float)i,2);
  }
  if (i>99 && i<1000){
    Serial.print((float)i,2);
  }
  if (i<-99 && i>-1000){
    Serial.print((float)i,1);
  }
  if (i>=1000){
    Serial.print((float)i,1);
  }
  if (i<-999){
    Serial.print(i);
    Serial.print(".");
  }
 }
void loop() {
  //read in values from the compass (accel) and gyro
  
  compass.read();
  gyro.read();

  Serial.print("A ");
  Serial.print("X: ");
  intAdjust(compass.a.x);
  Serial.print(" Y: ");
  intAdjust(compass.a.y);
  Serial.print(" Z: ");
  intAdjust(compass.a.z);
  
  Serial.print("     ");
  
  Serial.print("G ");
  Serial.print("X: ");
  intAdjust(gyro.g.x);
  Serial.print(" Y: ");
  intAdjust(gyro.g.y);
  Serial.print(" Z: ");
  intAdjust(gyro.g.z);
  Serial.println(" ");
  
  delay(100);
}
