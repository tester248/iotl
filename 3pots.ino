const int redLedPin = 9;
const int greenLedPin = 10;
const int blueLedPin = 11;
const int redPot = A0;
const int greenPot = A1;
const int bluePot = A2;

void setup() {
    pinMode(redLedPin, OUTPUT);
    pinMode(greenLedPin, OUTPUT);
    pinMode(blueLedPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int redValue = analogRead(redPot) / 4;
    int greenValue = analogRead(greenPot) / 4;
    int blueValue = analogRead(bluePot) / 4;
    Serial.print("Red: ");
    Serial.print(redValue);
    Serial.print(" Green: ");
    Serial.print(greenValue);
    Serial.print(" Blue: ");
    Serial.println(blueValue);
    analogWrite(redLedPin, redValue);
    analogWrite(greenLedPin, greenValue);
    analogWrite(blueLedPin, blueValue);
}