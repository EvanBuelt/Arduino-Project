#include "Arduino.h"
#include "Song.h"

void playNote(int buzzer_pin, Note note, int beatsPerMinute, int onTime) {

  long int duration = (note.duration * 60000 / Duration::Quarter) / beatsPerMinute;
  int frequency = Frequency(note.frequency);

  if(frequency == 0) {
    noTone(buzzer_pin);
  } else {
    tone(buzzer_pin, frequency);
  }
  delay((duration / 100) * onTime);
  noTone(buzzer_pin);
  delay((duration / 100) * (100 - onTime));

  return;
}