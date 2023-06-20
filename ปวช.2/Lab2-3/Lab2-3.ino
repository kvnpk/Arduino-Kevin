#define red A0
#define grn A1
#define blu A2

int i = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(grn, OUTPUT);
  pinMode(blu, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    char In = Serial.read();
    if (In == 'a') {
      RGB(255,0,0);
    }
    else if (In == 's') {
      RGB(0,255,0);
    }
    else if (In == 'd') {
      RGB(0,0,255);
    }
    else if (In == 'f') {
      RGB(255,255,255);
    }
  }

}

void RGB(int R, int G, int B){
  analogWrite(red, R);
  analogWrite(grn, G);
  analogWrite(blu, B);
}
