#include <DHT.h>

const int dhtPin = 2;       
const int dhtType = DHT11;  // DHT sensor type

DHT dht(dhtPin, dhtType);

float currentTemp;
float maxTemp = -100.0;  // Initialize to a very low value
float minTemp = 150.0;   // Initialize to a very high value

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("DHT11 Temperature Monitor");
  Serial.println("------------------------");
  delay(1000);
}

void loop() {
  delay(2000);
  float tempC = dht.readTemperature();
  
  if (isnan(tempC)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  currentTemp = (tempC * 9.0 / 5.0) + 32.0;
  
  if (currentTemp > maxTemp) {
    maxTemp = currentTemp;
  }
  if (currentTemp < minTemp) {
    minTemp = currentTemp;
  }
  Serial.print("Current: ");
  Serial.print(currentTemp, 1);
  Serial.print(" F | Min: ");
  Serial.print(minTemp, 1);
  Serial.print(" F | Max: ");
  Serial.print(maxTemp, 1);
  Serial.println(" F");
}