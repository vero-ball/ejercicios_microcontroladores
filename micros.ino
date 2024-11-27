void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ctr1 = micros()/1000000;
  ctr1 = ctr1 + 10;
  Serial.print("C1: ");
  Serial.println(ctr1);
  int ctr2 = micros()/1000000;
  Serial.print("C2: ");
  Serial.println(ctr2);
  ctr1 = ctr1 - ctr2;
  Serial.print("C1: ");
  Serial.println(ctr1);
  delay(1000);
}
