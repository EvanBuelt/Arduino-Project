#include<SPI.h>
#include<TFT.h>

const int cs = 10;
const int dc = 9;
const int rst = 8;

TFT TFTscreen = TFT(cs, dc, rst);
int red = 0;
int green = 0;
int blue = 0;

void setup() {
  digitalWrite(2, HIGH);
  TFTscreen.begin();
  TFTscreen.background(255, 255, 255);
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  TFTscreen.background(red, green, blue);
  red = (red + 1) % 255;
  green = red;
  blue = red;

  delay(50);
}
