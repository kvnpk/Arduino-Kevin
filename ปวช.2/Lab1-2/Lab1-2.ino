#define red 2
#define grn 3
#define blu 4

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(grn, OUTPUT);
  pinMode(blu, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  RGB(0,255,255); delay(250);
  RGB(255,255,255); delay(250);
  RGB(255,0,255); delay(250);
  RGB(255,0,0); delay(250);

}

void RGB(int R, int G, int B){
  analogWrite(red, R);
  analogWrite(grn, G);
  analogWrite(blu, B);
}
