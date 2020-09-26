float sleep = 0.0;
float sleepMul = 10.0;
float ledBrightness = 0.0;
int green = 9;
float mul = 255 / 9;


void setup() {
  Serial.begin(9600);
  pinMode(green, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    char inByte = Serial.read();
    if (inByte == 0) {
      ledBrightness = mul * 0;
    } else if (inByte == 1) {
      ledBrightness = mul * 1;
    } else if (inByte == 2) {
      ledBrightness = mul * 2;
    } else if (inByte == 3) {
      ledBrightness = mul * 3;
    } else if (inByte == 4) {
      ledBrightness = mul * 4;
    } else if (inByte == 5) {
      ledBrightness = mul * 5;
    } else if (inByte == 6) {
      ledBrightness = mul * 6;
    } else if (inByte == 7) {
      ledBrightness = mul * 7;
    } else if (inByte == 8) {
      ledBrightness = mul * 8;
    } else if (inByte == 9) {
      ledBrightness = mul * 9;
    } else if (inByte == 11) {
      sleep = sleepMul * 0;
    } else if (inByte == 12) {
      sleep = sleepMul * 1;
    } else if (inByte == 13) {
      sleep = sleepMul * 2;
    } else if (inByte == 14) {
      sleep = sleepMul * 3;
    } else if (inByte == 15) {
      sleep = sleepMul * 4;
    } else if (inByte == 16) {
      sleep = sleepMul * 5;
    } else if (inByte == 17) {
      sleep = sleepMul * 6;
    } else if (inByte == 18) {
      sleep = sleepMul * 7;
    } else if (inByte == 19) {
      sleep = sleepMul * 8;
    } else if (inByte == 20) {
      sleep = sleepMul * 9;
    }
  }
  analogWrite(green, ledBrightness);
  if (sleep != 0) {
    delay(sleep);
    digitalWrite(green, LOW);
    delay(sleep);
  }
}
