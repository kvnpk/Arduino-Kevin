int LED[] = {12, 14, 27};
void setup()
{
  Serial.begin(9600);
  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  attachInterrupt(1, onALL, RISING);
}
void loop()
{
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED[i], HIGH);
    delay(500);
    digitalWrite(LED[i], LOW);
    delay(500);
  }
}
void onALL()
{
  digitalWrite(LED[0], LOW);
  digitalWrite(LED[1], LOW);
  digitalWrite(LED[2], LOW);
  delay(2000);
}
