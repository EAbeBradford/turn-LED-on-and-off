// C++ code
//
void setup()
{
  //run at the start once
  // set led pin to output
  pinMode(13, OUTPUT);
  
}

void loop()
{
  //run infinate time over and over
  //speed of ardrino 400MZ or too fast to see
  //turn led on
  digitalWrite(13, HIGH);
  
  // stop thread for 1000 mili seconds
  delay(1000);
  
  //turn led off
  digitalWrite(13, LOW);
  
   // stop thread for 1000 mili seconds
  delay(1000);
  
  //loops loop again
  
}