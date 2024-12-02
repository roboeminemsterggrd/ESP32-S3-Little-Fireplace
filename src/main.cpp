#include <Arduino.h>

const uint8_t LED = 48;

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  
  while (true) {
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
  }
}

void loop() {}
