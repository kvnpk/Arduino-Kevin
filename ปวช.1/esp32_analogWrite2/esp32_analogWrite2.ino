#include <analogWrite.h>
int iot = 12;
int ldr = 36;
int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(iot, OUTPUT);
  pinMode(ldr, INPUT_PULLUP);

}

void loop() {
  val = map(analogRead(ldr), 0, 1023, 0, 255);
  Serial.println(val);
  analogWrite(iot, val);

}
