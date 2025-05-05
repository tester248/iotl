const int potPin = A0;
const int green = 11;
const int blue = 10;
const int red = 9;

void setup()
{
  pinMode(potPin, INPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  Serial.begin(9600);
}


void loop()
{
  int potValue = analogRead(potPin) / 4;
  Serial.print("Current Brightness (0-255): ");
  Serial.println(potValue);
  
  analogWrite(green,potValue);
  analogWrite(blue,potValue);
  analogWrite(red, potValue);

}


