#define SPEAKER 6

void speaker_setup(){
  pinMode(SPEAKER,OUTPUT);
  digitalWrite(SPEAKER,LOW);

}
void speaker() {
  digitalWrite(SPEAKER,HIGH);
  delay(500);
  digitalWrite(SPEAKER,LOW);
}