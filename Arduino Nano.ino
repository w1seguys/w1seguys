const int IA1 = 5;
const int IA2 = 4;

void setup() {
  pinMode(IA1, OUTPUT);
  pinMode(IA2, OUTPUT);

  analogWrite(IA1, HIGH);
  analogWrite(IA2, HIGH);

  digitalWrite(4, 0);
  analogWrite(5, 255);
  delay(10);
  digitalWrite(4, 0);
  analogWrite(5, 30);
  delay(10000);
  digitalWrite(4, 1);
  analogWrite(5, 215);
  delay(10000);
  digitalWrite(4, 0);
  analogWrite(5, 255);
  delay(15);
  digitalWrite(4, 0);
  analogWrite(5, 30);
  delay(10000);
}

void loop() {
}
