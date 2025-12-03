void OLED_setup() {
  OLED.begin();
  OLED.setFont(u8g2_font_6x12_tf);
}

void OLED_loop() {
  String rateString = String(rate);
  String infoString;
  int test = 0;

  OLED.clearBuffer();
  if (rate >= 100 && rate < 130) {
    infoString = ("BPM is high!");
  }
  if (rate >= 130) {
    infoString = ("BPM is too high!");
  }
  if (rate < 100 && rate > 30) {
    infoString = ("BPM is ok.");
  }
  if (rate <= 30) {
    infoString = ("BPM is low!");
  }

  if (rate < 100 && rate > 30) {
    test = 1;
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