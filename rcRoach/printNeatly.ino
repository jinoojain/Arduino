void printNeatly(){
  
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
  

