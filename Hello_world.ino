void setup() {
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, INPUT);   // or INPUT_PULLUP if using a button to GND
}

void loop() {

  while (digitalRead(7) == HIGH) {

    digitalWrite(5, HIGH);
    delay(2000);
    digitalWrite(5, LOW);
    delay(1000);
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(6, LOW);
    delay(1000);
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    delay(1000);
  }
}

