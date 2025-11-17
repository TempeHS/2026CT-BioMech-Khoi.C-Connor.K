void setup() {
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