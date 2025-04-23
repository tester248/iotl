const int greenLedPin = 13; // Green LED pin
const int yellowLedPin = 12; // Yellow LED pin
const int redLedPin = 11;    // Red LED pin

void setup() {
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter 'b' to blink green, 'g' to illuminate green, 'y' to illuminate yellow, or 'r' to illuminate red LED:");
}

void loop() {
    if (Serial.available() > 0){
        char input = Serial.read();
        Serial.print("You entered: ");
        Serial.println(input);
    }

    switch(input){
        case 'b':
            blinkGreen();
            break;
        case 'g':
            digitalWrite(greenLedPin, HIGH);
            digitalWrite(yellowLedPin, LOW);
            digitalWrite(redLedPin, LOW);
            break;
        case 'y':
            digitalWrite(greenLedPin, LOW);
            digitalWrite(yellowLedPin, HIGH);
            digitalWrite(redLedPin, LOW);
            break;
        case 'r':
            digitalWrite(greenLedPin, LOW);
            digitalWrite(yellowLedPin, LOW);
            digitalWrite(redLedPin, HIGH);
            break;
        default:
            Serial.println("Invalid input. Please enter 'b', 'g', 'y', or 'r'.");
            break;
    }
}

void blinkGreen(){
    for(int 0 = 0; i < 5; i++){ // blink 5 times
        digitalWrite(greenLedPin, HIGH);
        delay(250);
        digitalWrite(greenLedPin, LOW);
        delay(250);
    }
}