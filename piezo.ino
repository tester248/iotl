const int knockSensorPin = A0;     
const int buzzerPin = 8;          
const int threshold = 100;        

const int tuneNotes[] = {100, 200, 300, 400, 500, 600, 700, 800};  
const int noteCount = 8;          
const int noteDuration = 150;     

void setup() {
  pinMode(knockSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(knockSensorPin);
  Serial.println(sensorValue); 

  
  if (sensorValue >= threshold) {
    
    for (int i = 0; i < noteCount; i++) {
      tone(buzzerPin, tuneNotes[i], noteDuration);
      delay(noteDuration + 30); 
    }
    
    delay(500);
  }
  
  delay(10);  
}
