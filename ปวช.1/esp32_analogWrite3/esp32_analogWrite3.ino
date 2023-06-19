#include <analogWrite.h>
int Led[] = {12, 15, 2, 17};
int ldr = 36;
int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(Led[0], OUTPUT);
  pinMode(Led[1], OUTPUT);
  pinMode(Led[2], OUTPUT);
  pinMode(Led[3], OUTPUT);
  pinMode(ldr, INPUT);

}

void loop() {
  val = map(analogRead(ldr), 600, 900, 1, 4);
  Serial.println(val);
  if(val == 1){
    digitalWrite(Led[0], LOW);
    digitalWrite(Led[1], HIGH);
    digitalWrite(Led[2], HIGH);
    digitalWrite(Led[3], HIGH);
  }
  else if(val == 2){
    digitalWrite(Led[0], LOW);
    digitalWrite(Led[1], LOW);
    digitalWrite(Led[2], HIGH);
    digitalWrite(Led[3], HIGH);
  }
  else if(val == 3){
    digitalWrite(Led[0], LOW);
    digitalWrite(Led[1], LOW);
    digitalWrite(Led[2], LOW);
    digitalWrite(Led[3], HIGH);
  }
  else if(val == 4){
    digitalWrite(Led[0], LOW);
    digitalWrite(Led[1], LOW);
    digitalWrite(Led[2], LOW);
    digitalWrite(Led[3], LOW);
  }
  else{
    digitalWrite(Led[0], HIGH);
    digitalWrite(Led[1], HIGH);
    digitalWrite(Led[2], HIGH);
    digitalWrite(Led[3], HIGH);
  }
  
}
