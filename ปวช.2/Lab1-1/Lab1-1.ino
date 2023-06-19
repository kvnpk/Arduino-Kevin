#define red 2
#define yel 3
#define grn 4

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yel, OUTPUT);
  pinMode(grn, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(grn,HIGH); delay(100);
  digitalWrite(grn,LOW); delay(100);
  digitalWrite(yel,HIGH); delay(100);
  digitalWrite(yel,LOW); delay(100);
  digitalWrite(red,HIGH); delay(100);
  digitalWrite(red,LOW); delay(100);
  
}
