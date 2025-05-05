const int green = 12;
const int blue = 11;
const int red = 10;
void setup()
{
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(red,LOW);
  delay(1000);
  
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(red,LOW);
  delay(1000);
  
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(red,HIGH);
  delay(1000);
  
}