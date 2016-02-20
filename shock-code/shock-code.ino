void setup() {
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  for (int x = 0; x < 5; x++) {
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(5800);
  }
}
