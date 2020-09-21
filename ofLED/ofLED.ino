bool ledState = false;
int green = 9;


void setup() {
  Serial.begin(9600);
  pinMode(green, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    Serial.println(1);
    char inByte = Serial.read();
    if (inByte == 1) {
      ledState = !ledState;
      digitalWrite(green, ledState);
    }

    if (ledState == true) {
      char toOf[10] = "LED is OFF";
      Serial.write(toOf, 10);
    }
    else {
      char toOf[10] = "LED is ON";
      Serial.write(toOf, 10);
    }
  }
  else {
    Serial.println(2);
    digitalWrite(green, HIGH);
    delay(1000);
    digitalWrite(green, LOW);
    delay(1000);
  }


}
