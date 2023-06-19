//1.ให้เขียนโปรแกรมไฟกระพิบ led iot จำนวน 20 ครั้งด้วยคำสั่ง for

int iot = 12;

void setup() {
  Serial.begin(9600);
  pinMode(iot, OUTPUT);
  for(int i = 1;i == 20; i++){
    digitalWrite(iot, LOW);
    delay(1000);
    digitalWrite(iot, HIGH);
    delay(1000);
  }

}

void loop() {

}
