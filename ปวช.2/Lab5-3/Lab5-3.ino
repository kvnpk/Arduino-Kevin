#include <Servo.h> 
int sw1 = 2;
int sw2 = 3;
Servo s;


void setup() {
  s.attach(9);
  attachInterrupt(0, s90, RISING);
  attachInterrupt(1, s180, RISING);  
}

void loop() {
  s.write(0);
  delay(3000);
}

void s90(){
  s.write(90);
}

void s180(){
  s.write(180);
}
