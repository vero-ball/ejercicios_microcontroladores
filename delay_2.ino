void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

int ctr1 = 0;
int ctr2 = 0;

void loop() {
  // put your main code here, to run repeatedly:
  ctr1 = ctr1+10;
  Serial.println("Contador 1: ");
  Serial.println(ctr1);
  ctr2++;
  Serial.println("Contador 2: ");
  Serial.println(ctr2);
  ctr1 = ctr1 - ctr2;
  Serial.println("Contador 1: ");
  Serial.println(ctr1);
  delay(1000);
}
