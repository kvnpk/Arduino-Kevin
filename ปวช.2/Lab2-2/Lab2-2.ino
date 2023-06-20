#define sw 2
int val; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sw, INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(sw);
  if (val == 1){
    Serial.println("Hello World");
  }
  else{
    Serial.println("Good Bye"); delay(200);
  }

}
