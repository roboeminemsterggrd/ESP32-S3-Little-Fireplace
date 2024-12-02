#include <Arduino.h>
#include <SPI.h>
#include <TFT_eSPI.h>

const uint8_t LED = 48;

//const uint8_t TFT_SCLK = 13;
//const uint8_t TFT_MOSI = 12;
//const uint8_t TFT_RST = 11;
//const uint8_t TFT_DC = 10;
//const uint8_t TFT_CS = 9;

TFT_eSPI tft = TFT_eSPI();

[[noreturn]] void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  
  tft.setCursor(0, 0);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.print("Hello, world!");
  
  while (true) {
    ;
  }
}

void loop() {}
