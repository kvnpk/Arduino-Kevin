#include <analogWrite.h>
int iot = 12;
int x;

void setup() {
  pinMode(iot, OUTPUT);

}

void loop() {
  for(x = 255; x >= 0; x-- ){
    analogWrite(iot, x);
    delay(4);
  }
//  for(x = 0; x <= 255; x++ ){
//    analogWrite(iot, x);
//    delay(4);
//  }

}
