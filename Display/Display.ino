/*

 The circuit: 
 * LCD RS pin to digital pin 9
 * LCD Enable pin to digital pin 8
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 * 
 * SPI MOSI to digital pin 11
 * SPI MISO to digital pin 12
 * SPI SCK to digital pin 13
 * SPI SS to digital pin 10

 */

/*
 * Commands:
 * Read All: Reads all availabe contents of RAM as ADC, converts it temp, and sends it over Serial
 * Read (address): Reads the contents of RAM as ADC and sends it over Serial.  0 indicates no data.
 * Play Tone (frequency): Plays tone at specified frequency.
 * Play Tone Off: Stops tone.
 * Clear RAM: Clears all the contents of RAM (set to 0).
 */
// include the library code:
#include <LiquidCrystal.h>
#include <SpiRAM.h>

const int SS_PIN = 10;
const int CLOCK = 0;

const int RS_PIN = 9;
const int ENABLE_PIN = 8;

const int DB7 = 5;
const int DB6 = 4;
const int DB5 = 3;
const int DB4 = 2;

const int BUZZER_PIN = 6;

int address = 0;
const int maxAddress = 65535;

long int lcdUpdateTime = 0;
long int adcSamplingTime = 0;
long int serialTransferTime = 0;
long int spiTransferTime = 0;

String SerialBuffer = "";
int SerialAddress = 0;

unsigned int SerialData = 0;

unsigned int lcdUpdateRate = 500;
unsigned int adcSamplingRate = 25;
unsigned int serialTransferRate = 10000;
unsigned int spiTransferRate = 60000;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(RS_PIN, ENABLE_PIN, DB7, DB6, DB5, DB4);
SpiRAM externalMemory(CLOCK, SS_PIN);

int ADC_Counts = 0;
float tempC = 0;
float tempF = 0;

void setup() {
  // Setup the LCD's number of columns and rows:
  lcd.begin(16, 2);

  // Set up Serial port
  Serial.begin(38400);

  // Set analog reference to internal (1.1V).
  analogReference(INTERNAL);

  // Set initial times for reading and sending temperature data
  lcdUpdateTime = millis();
  adcSamplingTime = millis();
  serialTransferTime = millis();
  spiTransferTime = millis();
}

void loop() {

  // If there is any data in the serial buffer, assume it's an incoming command
  while(Serial.available() > 0) {
    SerialBuffer = Serial.readString();

    // "Read" indicates reading a single address
    if(SerialBuffer.startsWith("Read All", 0)) {

      // Grab the address to read.  Defaults to 0
      int readAddress = 0;
      float memoryTempC = 0;
      float memoryTempF = 0;

      do {
        // Data in SRAM is stored as two bytes.  Grab those two bytes.
        byte upperByte = externalMemory.read_byte(2 * readAddress);
        byte lowerByte = externalMemory.read_byte((2 * readAddress) + 1);
        SerialData = (( (int) upperByte) << 8) + ( (int) lowerByte);

        // Convert data in external RAM to temperature.
        memoryTempC = SerialData / 9.34;
        memoryTempF = 1.8 * memoryTempC + 32;
        readAddress += 1;
        
        // Send data over Serial.
        Serial.println(memoryTempF);
        
      } while(SerialData != 0);
      
    } else if(SerialBuffer.startsWith("Read ", 0)) {

      // Grab the address to read.  Defaults to 0
      int readAddress = 0;
      SerialBuffer.remove(0, 5);
      readAddress = SerialBuffer.toInt();
      
      // Data in SRAM is stored as two bytes.  Grab those two bytes.
      byte upperByte = externalMemory.read_byte(2 * SerialAddress);
      byte lowerByte = externalMemory.read_byte((2 * SerialAddress) + 1);
      SerialData = (( (int) upperByte) << 8) + ( (int) lowerByte);

      // Send data over Serial.
      Serial.println(SerialData);
    } else if(SerialBuffer.startsWith("Play Tone Off", 0)) {

       noTone(BUZZER_PIN);
    } else if(SerialBuffer.startsWith("Play Tone", 0)) {
      
      // Grab the tone to read. 
      SerialBuffer.remove(0, 9);
      tone(BUZZER_PIN, SerialBuffer.toInt());
    } else if(SerialBuffer.startsWith("Clear RAM", 0)) {

      // Clear SRAM of all data.
      char data[17] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};
      for(int i = 0;i < 4096;i++) {
        externalMemory.write_stream(i*16, data, 16);
      }
      address = 0;
      Serial.println("RAM Clear");
    }
  }

  // Read and convert the ADC data from the temperature sensor.
  if(millis() - adcSamplingTime > adcSamplingRate) {
    
    ADC_Counts = analogRead(0);
    tempC = ADC_Counts / 9.34;
    tempF = 1.8 * tempC + 32;

    adcSamplingTime = millis();
  }

  // Send temp in F over Serial
  /*if(millis() - serialTransferTime > serialTransferRate) {
    
    Serial.println(tempF);
    serialTransferTime = millis();
  }*/
  
  // Write data to external SRAM
  if(millis() - spiTransferTime > spiTransferRate) {
    
    int ADC_data = ADC_Counts;

    byte lowerByte = (byte) ((ADC_data & 0x00FF) >> 8);
    byte upperByte = (byte) (ADC_data & 0x00FF);
    
    externalMemory.write_byte(address, (byte) ((ADC_data >> 8) & 0xFF));
    externalMemory.write_byte(address+1, (byte) (ADC_data & 0xFF));

    address += 2;
    spiTransferTime = millis();
  }
  
  // Update LCD with latest temperature data
  if(millis() - lcdUpdateTime > lcdUpdateRate) {
    
    lcd.clear();
    lcd.print(tempF);

    lcdUpdateTime = millis();
  }
}

