// get the char from the string.  Do appropriate things to it

void getCommand(){
  
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
       myservo.write(0);
       Serial.println("0 degrees");
       break;
     case 'f':
       myservo.write(90);
       Serial.println("90 degrees");
       break;
     case 'v':
       myservo.write(180);
       Serial.println("180 degrees");
       break;  
     default:
       Serial.println("please input valid command: q,w,e or a,s,d. x to stop");
       Serial.println("r to turn servo one way, f to turn it the other way");
   }
     
  }    // end while
}
