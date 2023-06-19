int iot = 12;

void setup() {
  pinMode(iot, OUTPUT);

}

void loop() {
  iotblink();

}

void iotblink(void){
  digitalWrite(iot, LOW);
  delay(500);
  digitalWrite(iot, HIGH);
  delay(500);
}
