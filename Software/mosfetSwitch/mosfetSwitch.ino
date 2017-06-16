
const int nMOS = 2;

void setup() {
  pinMode(nMOS, OUTPUT);

}

void loop() {
  digitalWrite(nMOS, HIGH);
  delay(500);
  digitalWrite(nMOS, LOW);
  delay(500);

}
