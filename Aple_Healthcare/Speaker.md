https://wiki.seeedstudio.com/Grove-Speaker/

1. Setup the speaker 

Code snippets:
```
#define SPEAKER 6

void speaker_setup() {

  pinMode(SPEAKER, OUTPUT);

}
```

2. Play a tune when the heart rate is above 130 and the button has not been pressed

Code snippets:
```
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
```