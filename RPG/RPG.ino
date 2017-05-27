#include "Character.h"

character a = character(20, 20, 20, 20);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Start");
  randomSeed(A0);
}

void loop() {
  // put your main code here, to run repeatedly:
  long randVal;

  a.attack();
  
  delay(1000);
}
