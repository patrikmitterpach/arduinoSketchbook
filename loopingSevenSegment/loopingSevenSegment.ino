// C++ code
//
void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  for (int i = 5; i < 12; i++) {
    if (i == 8)
      continue;
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }
}
