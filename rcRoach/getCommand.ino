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
       break;
     case 's':
       motorOutput( medio ,true );
       break;
     case 'd':
       motorOutput( fast ,true );
       break;
     case 'x':
       motorOutput(0,false);
       break;
     default:
       Serial.println("please input valid command: q,w,e or a,s,d. x to stop");
   }
     
  }    // end while
}
