void setup()
{
  Serial.begin(9600);
  Serial.println("Enter a number to calculate its square and cube");
}

void loop()
{
  if(Serial.available() > 0)
  {
	double num = Serial.parseInt();
    double square = num * num;
    double cube = num * num * num;
    Serial.print("The square of: ");
    Serial.print(num);
    Serial.print(" is: ");
    Serial.println(square);
    Serial.print("The cube of: ");
    Serial.print(num);
    Serial.print(" is: ");
    Serial.println(cube);
    Serial.println("Enter another number to calc square and cube: ");
  }
}