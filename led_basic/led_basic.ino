int green = 9;

void setup() {
  pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(green, HIGH);
  delay(300);
  digitalWrite(green, LOW);
  delay(300);
}
