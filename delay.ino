void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
int contador = 0;

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(contador);
  contador++;
  delay(1000);
}