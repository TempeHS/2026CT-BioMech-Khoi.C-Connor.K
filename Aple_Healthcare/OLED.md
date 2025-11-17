OLED screen displays heart rate in BPM and draws different shapes that represent heart rate that depend on the BPM.

Code Snippet 1
,,,
if (rate >= 100 && rate < 130) {
  OLED.drawTriangle(64,16, 24,48, 104,48);
  OLED.setDrawColor(1);
}
if (rate >= 130) {
  OLED.drawEllipse(64, 32, 16, 16, U8G2_DRAW_ALL);
  OLED.setDrawColor(2);
}
if (rate < 100) { 
  OLED.setDrawColor(0);
}
,,,

Draws different shapes to display different alerts