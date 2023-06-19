#define red A0
#define grn A1
#define blu A2
#define potR A3
#define potG A4
#define potB A5

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(grn, OUTPUT);
  pinMode(blu, OUTPUT);
  pinMode(potR, INPUT);
  pinMode(potG, INPUT);
  pinMode(potB, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int RValue = analogRead(potR); 
  int GValue = analogRead(potG); 
  int BValue = analogRead(potB); 
  RGB(RValue,GValue,BValue);
  
}

void RGB(int R, int G, int B){
  analogWrite(red, R);
  analogWrite(grn, G);
  analogWrite(blu, B);
}
