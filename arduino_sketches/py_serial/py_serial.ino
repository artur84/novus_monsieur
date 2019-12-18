void setup() 
{
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);  
  Serial.begin(9600);
}

void loop() 
{
  if(Serial.available() > 0)
  {
    if(Serial.read() == 's')
    {
      digitalWrite(13,digitalRead(13)-HIGH);
    }
  }  
}
