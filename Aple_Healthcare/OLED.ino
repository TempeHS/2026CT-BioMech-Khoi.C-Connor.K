void OLED_setup() {
  OLED.begin();
  OLED.setFont(u8g2_font_6x12_tf);
}

void OLED_loop() {
  String rateString = String(rate);
  String infoString;

  OLED.clearBuffer();
  if (rate >= 100 && rate < 130) {
    // OLED.drawTriangle(64,16, 24,48, 104,48);
    infoString = ("BPM is moderate");
  }
  if (rate >= 130) {
    // OLED.drawEllipse(64, 32, 16, 16, U8G2_DRAW_ALL);
    infoString = ("BPM is NOT chill");
  }
  if (rate < 100 && rate > 30) {
    infoString = ("BPM is chill");
  }
  if (rate <= 30) {
    infoString = ("ok");
  }

  Serial.println(infoString);

  int rateWidth = OLED.getStrWidth(rateString.c_str());
  int rateXPos = (128 - rateWidth)/2;

  int infoWidth = OLED.getStrWidth(infoString.c_str());
  int infoXPos = (128 - infoWidth)/2;
  
  OLED.drawStr(infoXPos, 56, infoString.c_str());
  OLED.drawStr(rateXPos, 32, rateString.c_str());
  OLED.nextPage();
}