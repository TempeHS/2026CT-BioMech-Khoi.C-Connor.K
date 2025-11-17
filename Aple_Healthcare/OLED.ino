void OLED_setup() {
  OLED.begin();
  OLED.setFont(u8g2_font_6x12_tf);
}

void OLED() {
  String rateString = String(rate);
  String infoString;

  OLED.clearBuffer();
  if (rate >= 100 && rate < 130) {
    OLED.drawTriangle(64,16, 24,48, 104,48);
    OLED.setDrawColor(1);
    infoString = "BPM is moderate"
  }
  if (rate >= 130) {
    OLED.drawEllipse(64, 32, 16, 16, U8G2_DRAW_ALL);
    OLED.setDrawColor(2);
    infoString = "BPM is NOT chill"
  }
  if (rate < 100) { 
    OLED.setDrawColor(0);
    infoString = "BPM is chill"
  }
  
  OLED.drawStr(64, 32, rateString.c_str());
  OLED.drawStr(64, 56, infoString.c_str());
  
  OLED.nextPage();
}