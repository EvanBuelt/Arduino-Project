#include <SpiRAM.h>

#define SS_PIN 10
byte Clock = 0;

SpiRAM externalMemory(Clock, SS_PIN);
String serialBuffer = "";
char dataBuffer[17] = "Testing 90123456";
char dataStorage[17] = "                ";

void setup() {
  Serial.begin(9600);
}

void loop() {
  while(Serial.available() > 0) {
    char inChar = (char) Serial.read();
    serialBuffer += inChar;
  }

  if(serialBuffer != "") {
    Serial.println(serialBuffer);
    serialBuffer = "";
  }
  // Write Data to RAM
  externalMemory.write_stream(0, dataBuffer, 16);
  delay(100);

  // Read data from RAM
  externalMemory.read_stream(0, dataStorage, 16);

  for (int i = 0;i < 16;i++) {
    Serial.print(dataStorage[i]);
  }
  Serial.print("\n");
  delay(1000);
}
