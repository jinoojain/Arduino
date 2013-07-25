// from v1

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
