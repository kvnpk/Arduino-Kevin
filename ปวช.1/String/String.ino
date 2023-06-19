String str = "CDTI \n";
String Name = "Kevin";
int age = 15;
float gpa = 4.00;

void setup() {
  Serial.begin(9600);
  str += "Hello \t";
  str += "World";
  
  Serial.println("Name: " + Name);
  Serial.println("Age: " + String(age) + " Years Old");
  Serial.println("Gpa: " + String(gpa));

}

void loop() {
  Serial.println(str);
  delay(1000);

}
