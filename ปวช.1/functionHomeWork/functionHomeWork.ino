int led[] = {17, 2, 15, 12}; //BT, WIFI, NTP, IOT

void setup(){
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
}
void loop(){
  ledblink();
  
}
void ledblink(){
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
