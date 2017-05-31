const int led_array[8] = {8, 9, 10, 11, 2, 3, 4, 5};
int lit_led = 0;

bool increase = true;
signed int level_of_leds = 0;

class LEDs {
  bool initialized = false;
  int ledArray[8] = {8, 9, 10, 11, 2, 3, 4, 5};
  bool on = false;

  unsigned long int onTime;
  unsigned long int offTime;

  unsigned long int previousTime;
  unsigned long int currentTime;

  public: 
  
  LEDs() {

    noInterrupts();           // disable all interrupts
    TCCR1A = 0;
    TCCR1B = 0;
  
    TCNT1 = 64736;            // compare match register 16MHz/1/20kHz
    TCCR1B |= (1 << CS10);    // 1 prescaler
    TIMSK1 |= (1 << TOIE1);   // enable timer overflow interrupt

    bool on = false;
    unsigned long int onTime = 500; // On time in microseconds
    unsigned long int offTime = 4500; // Off time in microseconds
    
    unsigned long int previousTime = micros();
    unsigned long int currentTime = micros();

    for(int i = 0; i < sizeof(ledArray); i++) {
      pinMode(ledArray[i], OUTPUT);
    }

    interrupts();
    
    initialized = true;
  }

  void update() {
    if(initialized) {
      currentTime = micros();
      if (on) {
        if ( (currentTime - previousTime) >= onTime) {
          on = false;
          previousTime = currentTime;
        }
      }
      if (!on) {
        if ((currentTime - previousTime) >= offTime) {
          on = true;
          previousTime = currentTime;
        }
      }
      for(int i = 0; i < sizeof(ledArray); i++) {
        digitalWrite(ledArray[i], on);
      }
    }
  }

};

LEDs myLEDs = LEDs();

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}

ISR(TIMER1_OVF_vect)          // timer compare interrupt service routine
{
  TCNT1 = 64736;
  myLEDs.update();   // toggle LED pin
}



void led_level(int level) {
  int leds = 0;
  leds = map(level+6, 0, 100, 0, 8);

  for(int i = 0; i < leds; i++) {
    digitalWrite(led_array[i], true);
  }
  for(int i = leds; i < sizeof(led_array); i++) {
    digitalWrite(led_array[i], false);
  }
}

void led_brightness_loop(int brightness) {
  int led_id = 0;
  long int period = 100;

  if (brightness < 0) {
    brightness = 0;
  }
  else if (brightness > 100) {
    brightness = 100;
  }

  if (brightness > 0) {
    for(int led_id = 0; led_id < sizeof(led_array); led_id++) {
      digitalWrite(led_array[led_id], true);
    }
  }
  delayMicroseconds((period * brightness) / 100);
  for(int led_id = 0; led_id < sizeof(led_array); led_id++) {
    digitalWrite(led_array[led_id], false);
  }
  delayMicroseconds(((100 - brightness) * period) / 100);
}

