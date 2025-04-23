const int greenLedPin = 13;
const int yellowLedPin = 12;
const int redLedPin = 11;
int counter = 0;

void setup(){
    pinMode(greenLedPin, OUTPUT);
    pinMode(yellowLedPin, OUTPUT);
    pinMode(redLedPin, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    counter++;
    Serial.print("Counter: ");
    Serial.println(counter);

    if(counter < 100){
        digitalWrite(greenLedPin, HIGH);
        digitalWrite(yellowLedPin, LOW);
        digitalWrite(redLedPin, LOW);
    } else if(counter > 100 && counter <= 200){
        digitalWrite(greenLedPin, LOW);
        digitalWrite(yellowLedPin, HIGH);
        digitalWrite(redLedPin, LOW);
    } else if(counter > 200){
        digitalWrite(greenLedPin, LOW);
        digitalWrite(yellowLedPin, LOW);
        digitalWrite(redLedPin, HIGH);
    }

    if(counter >= 300){
        counter = 0;
    }
    delay(100);
}