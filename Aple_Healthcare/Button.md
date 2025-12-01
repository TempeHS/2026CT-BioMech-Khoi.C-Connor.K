Button is used to stop the alarm from beeping too much

Progress:
1. Setup the button
Code snippets:
```
void button_setup() {
  pinMode(buttonPIN, INPUT);
}
```

2. Code the loop and logic statements
Code snippets:
```
void button() {
  bool button = digitalRead(buttonPIN);

  if (rate > 70) {
    if (button == true) {
      speaker_access = 0;
    }
  } else {
    speaker_access = 1;
  }

  Serial.println(speaker_access);
}
```

3. Link speaker_access to stop the speaker from 
Code snippets:
```
if (rate >= 130 && speaker_access == 1)
```