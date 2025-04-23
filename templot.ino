#include <DHT.h>

const int dhtPin = 2;       
const int dhtType = DHT11;  // DHT sensor type

DHT dht(dhtPin, dhtType);

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
  Serial.println(tempC, 1);
}
