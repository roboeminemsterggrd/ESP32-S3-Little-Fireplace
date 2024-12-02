#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <Arduino.h>
#include <SPI.h>

const uint8_t LED = 48;

const uint8_t TFT_SCLK = 13;
const uint8_t TFT_MOSI = 12;
const uint8_t TFT_RST = 11;
const uint8_t TFT_DC = 10;
const uint8_t TFT_CS = 9;

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
  
  tft.initR(INITR_18BLACKTAB);
  tft.setRotation(1);
  tft.setSPISpeed(40000000);
  
  while (true) {
    ;
  }
}

void loop() {}
