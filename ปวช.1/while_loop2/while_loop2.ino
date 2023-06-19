int led = 12;

void setup() {
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);

}

void loop() {
  int x = 10;
  while(x >= 1){
    digitalWrite(led, LOW);
    delay(250);
    digitalWrite(led, HIGH);
    delay(250);
    x--;
  }

}
