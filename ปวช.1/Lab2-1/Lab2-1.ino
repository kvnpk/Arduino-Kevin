int led0 = 17;
int led1 = 2;
int led2 = 15;
int led3 = 12;

void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop() {
  digitalWrite(led0, HIGH);
  delay(100);
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led0, LOW);
  delay(100);
  digitalWrite(led1, LOW);
  delay(100);
  digitalWrite(led2, LOW);
  delay(100);
  digitalWrite(led3, LOW);
  delay(100);

}
