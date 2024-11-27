void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ctr1 = 0;
  ctr1 = ctr1+10;
  Serial.println("Contador 1: ");
  Serial.println(ctr1);
  int ctr2 = 0;
  ctr2++;
  Serial.println("Contador 2: ");
  Serial.println(ctr2);
  ctr1 = ctr1 - ctr2;
  Serial.println("Contador 1: ");
  Serial.println(ctr1);
  delay(1000);
}
