#include <Wire.h>
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27,16,2); 
void setup() {
  lcd.init();  
  lcd.clear();    
  lcd.backlight();      
  lcd.setCursor(2,0);   
  lcd.print("I2C LCD Nano"); 
  lcd.setCursor(2,1);   
  lcd.print("Linuxhint.com"); 
}
void loop() {
}
