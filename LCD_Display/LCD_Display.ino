class lcd {
  private:
    int rs_pin;
    int rw_pin;
    int e_pin;
  public:
    lcd(){
      
    }
    
    lcd(int RS_pin, int read_write_pin, int enable_pin){
      rs_pin = RS_pin;
      rw_pin = read_write_pin;
      e_pin = enable_pin;

      pinMode(rs_pin, OUTPUT);
      pinMode(rw_pin, OUTPUT);
      pinMode(e_pin, OUTPUT);
    }

    void initialize_display(int data_length, int line_numbers, int display_font, int display_shift_enable, int cursor_direction){
      
       delay(45); // On powerup, the LCD requires at least 40 ms wait if Vdd > 2.7V
       function_set(1, 0, 0); // First function_set will have 8 bit length.  Only upper four bits actually matter.
       delay(5); // Wait 4.1 ms to send second function set
       function_set(1, 0, 0); // Second function_set will have 8 bit length.  Only upper four bits actually matter.
       delayMicroseconds(110); // Wait at least 100 us
       function_set(data_length, 0, 0); // Third function_set to set bit length.  Only upper four bits actually matter.
       function_set(data_length, line_numbers, display_font); // Fourth and final function set to set line numbers and font
       
       display_control(0, 0, 0);
       clear_display();
       entry_mode_set(display_shift_enable, cursor_direction);
    }

    void clear_display(){
      /* 
       * RS = 0, R/W = 0
       * DB0 = 1
       * DB1-7 = 0
       */

       bool is_busy = true;
       while(is_busy){
        is_busy = read_busy_flag();
       }
       
       DDRD = 0xFF;
       PORTD = 0x01;
       digitalWrite(rs_pin, LOW);
       digitalWrite(rw_pin, LOW);

       pulse_enable();
    }

    void return_home(){
      /*
       * RS = 0
       * R/W = 0
       * DB1 = 1
       * DB2-7 = 0
       */
       
       bool is_busy = true;
       while(is_busy){
        is_busy = read_busy_flag();
       }
       
       DDRD = 0xFF;
       PORTD = 0x02;
       digitalWrite(rs_pin, LOW);
       digitalWrite(rw_pin, LOW);

       pulse_enable();
    }

    void entry_mode_set(int display_shift_enable, int cursor_direction){
      /*
       * RS = 0
       * R/W = 0
       * DB0 = SH
       * DB1 = 1/D
       * DB2 = 1
       * DB3-7 = 0
       */

       bool is_busy = true;
       while(is_busy){
        is_busy = read_busy_flag();
       }
       
       DDRD = 0xFF;
       PORTD = 0x04 | (display_shift_enable & 0x01) | ((cursor_direction & 0x01) << 1);
       digitalWrite(rs_pin, LOW);
       digitalWrite(rw_pin, LOW);

       pulse_enable();
    }

    void display_control(int blinking_on_bit, int cursor_on_bit, int display_on_bit){
      /*
       * RS = 0
       * R/W = 0
       * DB0 = Blinking
       * DB1 = Cursor
       * DB2 = Display
       * DB3 = 1
       * DB4-7 = 0
       */

       bool is_busy = true;
       while(is_busy){
        is_busy = read_busy_flag();
       }
       
       DDRD = 0xFF;
       PORTD = 0x08 | (blinking_on_bit & 0x01) | ((cursor_on_bit & 0x01) << 1) | ((display_on_bit & 0x01) << 2);
       digitalWrite(rs_pin, LOW);
       digitalWrite(rw_pin, LOW);

       pulse_enable();
    }

    void cursor_display_shift(int screen_cursor_shift, int direction_shift){
      /*
       * RS = 0
       * R/W = 0
       * DB2 = cursor_shift
       * DB3 = display_shift
       * DB4 = 1
       * DB5-7 = 0
       */

       bool is_busy = true;
       while(is_busy){
        is_busy = read_busy_flag();
       }
       
       DDRD = 0xFF;
       PORTD = 0x10 | ((direction_shift & 0x01) << 2) | ((screen_cursor_shift & 0x01) << 3);
       digitalWrite(rs_pin, LOW);
       digitalWrite(rw_pin, LOW);

       pulse_enable();
    }

    void function_set(int data_length, int line_numbers, int display_font){
      /*
       * RS = 0
       * R/W = 0
       * DB2 = font
       * DB3 = line_numbers
       * DB4 = data_length
       * DB5 = 1
       * DB6-7 = 0
       */

       bool is_busy = true;
       while(is_busy){
        is_busy = read_busy_flag();
       }
       
       DDRD = 0xFF;
       PORTD = 0x20 | ((display_font & 0x01) << 2) | ((line_numbers & 0x01) << 3) | ((data_length & 0x01) << 4);
       digitalWrite(rs_pin, LOW);
       digitalWrite(rw_pin, LOW);

       pulse_enable();
    }

    void set_CGRAM_address(int address){
      /*
       * RS = 0
       * R/W = 0
       * DB0-5 = address
       * DB6 = 1
       * DB7 = 0
       */

       bool is_busy = true;
       while(is_busy){
        is_busy = read_busy_flag();
       }
       
       DDRD = 0xFF;
       PORTD = 0x40 | (address & 0x3F);
       digitalWrite(rs_pin, LOW);
       digitalWrite(rw_pin, LOW);

       pulse_enable();
    }

    void set_DDRAM_address(int address){
      /*
       * RS = 0
       * R/W = 0
       * DB0-6 = address
       * DB7 = 1
       */

       bool is_busy = true;
       while(is_busy){
        is_busy = read_busy_flag();
       }
       
       DDRD = 0xFF;
       PORTD = 0x80 | (address & 0x7F);
       digitalWrite(rs_pin, LOW);
       digitalWrite(rw_pin, LOW);

       pulse_enable();
    }

    bool read_busy_flag(){
      
      /*
       * RS = 0
       * R/W = 1
       * DB0-6 = address
       * DB7 = busy flag
       */

       int data = 0;
       DDRD = 0x00;
       digitalWrite(rs_pin, LOW);
       digitalWrite(rw_pin, HIGH);

       // Clock enable pin to send data to LCD. 
       digitalWrite(e_pin, HIGH);
       delayMicroseconds(1); // Pulse width must be at least 230 ns.
       data = (PORTD & 0x80) >> 7;
       digitalWrite(e_pin, LOW);

       // No delay needed.
       return (bool) data;
    }

    int read_address(){
      /*
       * RS = 0
       * R/W = 1
       * DB0-6 = address
       * DB7 = busy flag
       */

       int data = 0;
       DDRD = 0x00;
       digitalWrite(rs_pin, LOW);
       digitalWrite(rw_pin, HIGH);

       // Clock enable pin to send data to LCD. 
       digitalWrite(e_pin, HIGH);
       delayMicroseconds(1); // Pulse width must be at least 230 ns.
       data = (PORTD & 0x7F);
       digitalWrite(e_pin, LOW);

       // No delay needed.
       return data;
    }
    void write_data_to_RAM(int data){
      
      /*
       * RS = 1
       * R/W = 0
       * DB0-7 = data
       */

       bool is_busy = true;
       while(is_busy){
        is_busy = read_busy_flag();
       }
       
       DDRD = 0xFF;
       PORTD = data;
       digitalWrite(rs_pin, HIGH);
       digitalWrite(rw_pin, LOW);

       // Clock enable pin to send data to LCD. 
       digitalWrite(e_pin, LOW);
       delayMicroseconds(1);
       digitalWrite(e_pin, HIGH);
       delayMicroseconds(1); // Pulse width must be at least 230 ns.
       digitalWrite(e_pin, LOW);

       delayMicroseconds(60);// Execution time is 43us, so wait 60us just to be safe.
    }

    void read_data_from_RAM(){
      /*
       * RS = 1
       * R/W = 1
       * DB0-7 = data
       */

      bool is_busy = true;
      while(is_busy){
        is_busy = read_busy_flag();
      }
       
      int data = 0;
      DDRD = 0x00;
      digitalWrite(rs_pin, HIGH);
      digitalWrite(rw_pin, HIGH);

      // Clock enable pin to send data to LCD.
      digitalWrite(e_pin, LOW);
      delayMicroseconds(1);
      digitalWrite(e_pin, HIGH);
      delayMicroseconds(1); // Pulse width must be at least 230 ns.
      data = PORTD;
      digitalWrite(e_pin, LOW);

      delayMicroseconds(60);// Execution time is 43us, so wait 60us just to be safe.
    }
    
    void pulse_enable() {
       digitalWrite(e_pin, LOW);
       delayMicroseconds(1);
       digitalWrite(e_pin, HIGH);
       delayMicroseconds(1);
       digitalWrite(e_pin, LOW);
    }
};

lcd myDisplay;

void setup() {
  // put your setup code here, to run once:

  myDisplay = lcd(10, 11, 12);
  myDisplay.initialize_display(1, 1, 1, 0, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
