void button_setup() {
  pinMode(buttonPIN, INPUT);
}

void button() {
  bool button = digitalRead(buttonPIN);

  if (rate > 100) {
    if (button == true) {
      speaker_access = 0;
    }
  } else {
    speaker_access = 1;
  }

  Serial.println(speaker_access);
}