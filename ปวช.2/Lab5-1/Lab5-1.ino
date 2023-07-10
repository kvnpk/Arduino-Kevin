int led = 12;
void setup()
{
Serial.begin(9600);
pinMode(led, OUTPUT);
attachInterrupt(1, blink, RISING);
}
void loop()
{
digitalWrite(led, LOW);
Serial.println("LED OFF");
}
void blink()
{
Serial.println("Interrupt");
Serial.println("LED ON");
digitalWrite(led, HIGH);
delay(250);
}
