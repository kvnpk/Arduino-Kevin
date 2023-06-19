int bt = 17;
int wifi = 2;
int ntp = 15;
int iot = 12;

void setup() {
  pinMode(bt, OUTPUT);
  pinMode(wifi, OUTPUT);
  pinMode(ntp, OUTPUT);
  pinMode(iot, OUTPUT);
    
}

void loop() {
  forward();
  delay(1000);
  backward();
  delay(1000);
  left();
  delay(1000);
  right();
  delay(1000);
  st();
  delay(1000);

}
void forward(){
  digitalWrite(bt, LOW);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, LOW);
  digitalWrite(iot, HIGH);
}
void backward(){
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, LOW);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, LOW);
}
void right(){
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, LOW);
  digitalWrite(ntp, LOW);
  digitalWrite(iot, HIGH);
}
void left(){
  digitalWrite(bt, LOW);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, LOW);
}
void st(){
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(iot, HIGH);
}
