
const int nMOS1 = 2;
const int nMOS2 = 3;

void setup() {
  pinMode(nMOS1, OUTPUT);
  pinMode(nMOS2, OUTPUT);

}

void loop() {
  digitalWrite(nMOS1, HIGH);
  digitalWrite(nMOS2, LOW);
  delay(500);
  digitalWrite(nMOS1, LOW);
  digitalWrite(nMOS2, HIGH);
  delay(500);

}
