int bt = 17;
int wifi = 2;
int ntp = 15;
int iot = 12;
int sw1 = 16;
int sw2 = 14;
int a;
int b;

void setup() {
  pinMode(bt, OUTPUT);
  pinMode(wifi, OUTPUT);
  pinMode(ntp, OUTPUT);
  pinMode(iot, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);  
}

void loop() {
  a = digitalRead(sw1);
  b = digitalRead(sw2);
  
  if(a == LOW){
    forward();
  }
  else if(b == LOW){
    backward();
  }
  else{
    st();
  }

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
