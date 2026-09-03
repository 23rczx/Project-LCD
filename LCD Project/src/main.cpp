
#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin(16,2);
  lcd.backlight();
}

void loop() { 
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("ROBOTICS FOR LIFEE");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("WOOOHHH");
  delay(1000);  

  lcd.print("boombastic side eye");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("oleoleee");
  delay(1000);  

}