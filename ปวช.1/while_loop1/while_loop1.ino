int led[] = {12, 15, 2, 17}
int x = 0;

void setup() {
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
  digitalWrite(led[0],HIGH);
  digitalWrite(led[1],HIGH);
  digitalWrite(led[2],HIGH);
  digitalWrite(led[3],HIGH);

}

void loop() {
  while(x < 4){
    digitalWrite(led[x], LOW);
    delay(250);
    digitalWrite(led[x], HIGH);
    delay(250);
    x++;
  }

}
