#include <LCD_High_Level.h>

const int RS_PIN = 9;
const int RW_PIN = 8;
const int ENABLE_PIN = 10;

const int D4 = 4;
const int D5 = 5;
const int D6 = 6;
const int D7 = 7;

LCD_High_Level myLCD = LCD_High_Level(RS_PIN, RW_PIN, ENABLE_PIN, D4, D5, D6, D7);

void setup() {
  
  // put your setup code here, to run once:
  myLCD.begin(16, 2);
  myLCD.print("Hello World!");
  /* myLCD.setDDRAMAddress(0x00);
  myLCD.writeDataToRAM('H');
  myLCD.writeDataToRAM('e');
  myLCD.writeDataToRAM('l');
  myLCD.writeDataToRAM('l');
  myLCD.writeDataToRAM('o');
  myLCD.writeDataToRAM(' ');
  myLCD.writeDataToRAM('W');
  myLCD.writeDataToRAM('o');
  myLCD.writeDataToRAM('r');
  myLCD.writeDataToRAM('l');
  myLCD.writeDataToRAM('d');
  myLCD.writeDataToRAM('!');

  */
  /*
  myLCD.clearDisplay();
  
  myLCD.writeDataToRAM('F');
  myLCD.writeDataToRAM('u');
  myLCD.writeDataToRAM('c');
  myLCD.writeDataToRAM('k');
  myLCD.writeDataToRAM(' ');
  myLCD.writeDataToRAM('Y');
  myLCD.writeDataToRAM('o');
  myLCD.writeDataToRAM('u');
  myLCD.writeDataToRAM(' ');
  myLCD.writeDataToRAM('D');
  myLCD.writeDataToRAM('a');
  myLCD.writeDataToRAM('d');
  myLCD.writeDataToRAM('!');
  */

  /*
  delay(1000);
  
  myLCD.clearDisplay();

  delay(1000);
  
  myLCD.writeDataToRAM('H');
  myLCD.writeDataToRAM('i');

  delay(1000);

  myLCD.clearDisplay();

  delay(1000);
  
  myLCD.writeDataToRAM('B');
  myLCD.writeDataToRAM('y');
  myLCD.writeDataToRAM('e');

  myLCD.setDDRAMAddress(0x0E);

  myLCD.writeDataToRAM('a'); */
}

void loop() {
  // put your main code here, to run repeatedly:

}
