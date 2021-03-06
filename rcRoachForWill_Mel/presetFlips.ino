// Either initate the preset flip command, or follow the prompt for a custom flip
/**************************
* Control flow:
* - press 'p' for preset flip or 'c' for custom flip
* - motor speed: enter an int between 100-200
* - motor direction: press 'f' for forwards, 'b' for backwards
* - servo speed: enter an int between ___-___
* - servo start angle: enter an int between 0-90
* - servo end angle: enter an int between 0-90
* - press 's' to initate flip
***************************/
//Consider using map function to make speed conversions easier 

void presetFlips(){
 
  // define values
  int motorSpeed;
  int servoSpeed;
  boolean motorDirection;
  int servoStart;
  int servoEnd;
  
  while(Serial.available()){
    Serial.println("Press 'p' for preset flip or 'c' for custom flip");
    char choice = Serial.read();
    if (choice == 'p'){
      // STANDARD FLIP DEFAULT VALUES
      customFlip(motorSpeed = 150, servoSpeed =20 , motorDirection = false, servoStart=0, servoEnd=180);
    }
    else if (choice == 'c'){
      // CUSTOM FLIP CONTROL FLOW
      
      // Motor Speed
      Serial.println("Motor Speed: Enter an int between 100-200, or 0 for no motor");
      if (Serial.available() > 0){
        int motorSpeed = Serial.read();
      }
      //Motor Direction (only if motor is on)
      if (motorSpeed != 0){
        Serial.println("Motor Direction: Press 'f' for forwards, 'b' for backwards");
        char choiceTwo = Serial.read();
        if (choiceTwo == 'f'){
          boolean motorDirection = false;
        }
        if (choiceTwo == 'b'){
          boolean motorDirection = true;
        }
      }
      
      //Servo Speed
      Serial.println("Servo Speed: Enter an int between 0 - 30");
      int servoSpeed = Serial.read();
      
      //Servo speed: delay between 10ms and 40ms
      
      //Servo Angles
      Serial.println("Servo Start Angle: Enter an int between 0-90");
      int servoStart = Serial.read();
      Serial.println("Servo End Angle: Enter an int between 0-90");
      int servoEnd = Serial.read();
      
      //Initate Flip
      Serial.println("Press 's' to start flip");
      char start = Serial.read();
      if (start == 's'){
        customFlip(motorSpeed, servoSpeed, motorDirection, servoStart, servoEnd);
      }
      else{
        Serial.println("Boo you suck");
      }
    }  //end else if
    else {
      Serial.println("You failed; try again");
    }
  }  // end while
}  // end presetFlips
      
  
      
      

