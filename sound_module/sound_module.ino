int knock = 0;

void setup() {
  Serial.begin(38400);
}

void loop() {
  knock = analogRead(0);
  if (knock > 10) {
    Serial.println(knock);
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
  }
}

