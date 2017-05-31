#include <LiquidCrystal.h>

const int RW_PIN = 8;
const int RS_PIN = 9;
const int ENABLE_PIN = 10;

const int D7 = 7;
const int D6 = 6;
const int D5 = 5;
const int D4 = 4;

LiquidCrystal lcd(RS_PIN, ENABLE_PIN, D4, D5, D6, D7);

void setup() {
  pinMode(RW_PIN, OUTPUT);
  digitalWrite(RW_PIN, LOW);
  
  // put your setup code here, to run once:
  lcd.begin(16, 2);

  delay(1000);
  
  lcd.clear();
  lcd.print("Hello");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear();
  lcd.print("Hello");

  delay(1000);
}
