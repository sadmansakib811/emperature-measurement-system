void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2,INPUT);
}

void loop()
{
  int value=digitalRead(2);
  if (value==HIGH){
  digitalWrite(3, HIGH);
    
  }
  else{
  digitalWrite(3, LOW);
  }

}