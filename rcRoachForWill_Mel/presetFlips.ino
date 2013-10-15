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

void presetFlips(){
  // define values
  int motorSpeed;
  int servoSpeed;
  boolean motorDirection;
  int servoStart;
  int servoEnd;
 
  // define our speeds
  int slow = 100;
  int medio= 150;
  int fast = 200;
  
  while(Serial.available()){
   char value = Serial.read();
   // chose no lin
   switch (value)
   {
     case 'q': 
       motorOutput(  slow,false );
       Serial.println("Forward slow");
       break;       
     case 'w':
       motorOutput( medio ,false );
       Serial.println("Forward moderate");
       break;
     case 'e':
       motorOutput( fast ,false );
       Serial.println("Forward fast");
       break;
     case 'a':
       motorOutput( slow ,true );
       Serial.println("Backwards slow");
       break;
     case 's':
       motorOutput( medio ,true );
       Serial.println("Backwards moderate");
       break;
     case 'd':
       motorOutput( fast ,true );
       Serial.println("Backwards fast");
       break;
     case 'x':
       motorOutput(0,false);
       Serial.println("STOP");
       break;
     case 'r':
       myservo.write(30);
       
       myservo2.write(70);
       Serial.println("0 degrees");
       break;
     case 'f':
       myservo.write(45);
       myservo2.write(45);
       Serial.println("45 degrees");
       break;
     case 'v':
       myservo.write(90);
       myservo2.write(0);
       Serial.println("90 degrees");
       break;  
     default:
       Serial.println("please input valid command: q,w,e or a,s,d. x to stop");
       Serial.println("r to turn servo one way, f to turn it the other way");
   }
     
  }    // end while
}
