#include <math.h>
#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

U8G2_SSD1306_128X64_NONAME_F_HW_I2C OLED(U8G2_R0, SCL, SDA, U8X8_PIN_NONE);

void setup() {
  Serial.begin(9600);
  
  heartRate_setup();
  OLED_setup();
  speaker_setup();
}

void loop() {
  heartRate();
  OLED();
  speaker();
  delay(100);
}