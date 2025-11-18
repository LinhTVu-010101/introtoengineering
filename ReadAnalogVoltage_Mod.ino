void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(analogRead(A0) * (5.0 / 1023.0));
  Serial.print("\t");
  Serial.println(analogRead(A5) * (5.0 / 1023.0));
  delay(15);
}
