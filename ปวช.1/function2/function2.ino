int iot = 12;
int ntp = 15;

void setup() {
  pinMode(iot, OUTPUT);
  pinMode(ntp, OUTPUT);

}

void loop() {
  iotblink();
  ntpblink(1000, 100);

}

void iotblink(void){
  digitalWrite(iot, LOW);
  delay(500);
  digitalWrite(iot, HIGH);
  delay(500);
}
void ntpblink(int value1, int value2){
  digitalWrite(ntp, LOW);
  delay(value1);
  digitalWrite(ntp, HIGH);
  delay(value2);
}
