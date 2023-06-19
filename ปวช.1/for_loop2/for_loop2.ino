//2.ให้เขียนโปรแกรมไฟวิ่ง 4 ดวง ด้วยคำสั่ง for

int led[] = {12, 15, 2, 17};
int x;

void setup() {
  Serial.begin(9600);
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[4], OUTPUT);

}

void loop() {
  for(x = 0; x <= 3; x++){
    digitalWrite(led[x], LOW);
    delay(500);
    digitalWrite(led[x], HIGH);
    delay(500);
  }
  for(x = 0; x <= 3; x++){
    digitalWrite(led[x], LOW);
    delay(500);
    digitalWrite(led[x], HIGH);
    delay(500);
  }


}
