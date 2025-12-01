#define SPEAKER 6

void speaker_setup() {
  pinMode(SPEAKER, OUTPUT);
}
void speaker() {
  if (rate >= 130 && speaker_access == 1) {
    tone(SPEAKER, 523, 200);  // C5
    delay(250);
    tone(SPEAKER, 659, 200);  // E5
    delay(250);
    tone(SPEAKER, 784, 200);  // G5
    delay(250);
    tone(SPEAKER, 1047, 400);  // C6
    delay(500);
    noTone(SPEAKER);
  }
  digitalWrite(SPEAKER, LOW);
}