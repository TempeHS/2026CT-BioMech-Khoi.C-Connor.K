void OLED_setup() {
  OLED.begin();
  OLED.setFont(u8g2_font_6x12_tf);
}

void OLED_loop() {
  String rateString = String(rate);
  
  String infoString;

  OLED.clearBuffer();
  if (rate >= 60 && rate < 70) {
    // OLED.drawTriangle(64,16, 24,48, 104,48);
    infoString = ("BPM is moderate");
  }
  if (rate >= 70) {
    // OLED.drawEllipse(64, 32, 16, 16, U8G2_DRAW_ALL);
    infoString = ("BPM is NOT chill");
  }
  if (rate < 60) {
    infoString = ("BPM is chill");
  }

  Serial.println(infoString);
  
  OLED.drawStr(32, 56, infoString.c_str());
  OLED.drawStr(64, 32, rateString.c_str());
  OLED.nextPage();
  
}