void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int contador = millis();
  Serial.println(contador/1000);
  delay(1000);
}
