// get the char from the string.  Do appropriate things to it

void getCommand(){
  
  // define our speeds
  int slow = 60;
  int medio= 125;
  int fast = 200;
  
  while(Serial.available()){
   char value = Serial.read();
   // chose no lin
   switch (value)
   {
     case 'q': 
       motorOutput(  slow,false );
       break;       
     case 'w':
       motorOutput( medio ,false );
       break;
     case 'e':
       motorOutput( fast ,false );
       break;
     case 'a':
       motorOutput( slow ,true );
       Serial.println("going in other direction");
       break;
     case 's':
       motorOutput( medio ,true );
       Serial.println("going in other direction");
       break;
     case 'd':
       motorOutput( fast ,true );
       Serial.println("going in other direction");
       break;
     case 'x':
       motorOutput(0,false);
       break;
     case 'r':
       myservo.write(180);
       break;
     case 'f':
       myservo.write(0);
       break;
     case 'v':
       myservo.write(90);
       break;  
     default:
       Serial.println("please input valid command: q,w,e or a,s,d. x to stop");
       Serial.println("r to turn servo one way, f to turn it the other way");
   }
     
  }    // end while
}
