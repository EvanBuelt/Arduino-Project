#ifndef Song_H
#define Song_H

enum Frequency {
  None     = 0,
  c3       = 130,
  c3_Sharp = 139,
  d3_Flat  = 139,
  d3       = 147,
  d3_Sharp = 156,
  e3_Flat  = 156,
  e3       = 165,
  f3       = 175,
  f3_Sharp = 185,
  g3_Flat  = 185,
  g3       = 196,
  g3_Sharp = 208,
  a3_Flat  = 208,
  a3       = 220,
  a3_Shart = 233,
  b3_Flat  = 233,
  b3       = 247,

  c4       = 261,
  c4_Sharp = 277,
  d4_Flat  = 277,
  d4       = 294,
  d4_Sharp = 311,
  e4_Flat  = 311,
  e4       = 330,
  f4       = 349,
  f4_Sharp = 370,
  g4_Flat  = 370,
  g4       = 392,
  g4_Sharp = 415,
  a4_Flat  = 415,
  a4       = 440,
  a4_Shart = 466,
  b4_Flat  = 466,
  b4       = 494,

  c5       = 523,
  c5_Sharp = 554,
  d5_Flat  = 554,
  d5       = 587,
  d5_Sharp = 622,
  e5_Flat  = 622,
  e5       = 659,
  f5       = 698,
  f5_Sharp = 740,
  g5_Flat  = 740,
  g5       = 784,
  g5_Sharp = 830,
  a5_Flat  = 830,
  a5       = 880,
  a5_Shart = 932,
  b5_Flat  = 932,
  b5       = 988,

  c6       = 1046,
  c6_Sharp = 1109,
  d6_Flat  = 1109,
  d6       = 1175,
  d6_Sharp = 1245,
  e6_Flat  = 1245,
  e6       = 1319,
  f6       = 1397,
  f6_Sharp = 1480,
  g6_Flat  = 1480,
  g6       = 1568,
  g6_Sharp = 1661,
  a6_Flat  = 1661,
  a        = 1760,
  a6_Shart = 1865,
  b6_Flat  = 1865,
  b6       = 1976,
};

enum Duration {
  Sixteenth   = 1,
  Eight       = 2,
  EightPlus   = 3,
  Quarter     = 4,
  QuarterPlus = 6,
  Half        = 8,
  HalfPlus    = 12,
  Whole       = 16,
  WholePlus   = 24
};

struct Note {
  Frequency frequency; // Use frequency table above.
  Duration duration; // In ms
};


void playNote(int buzzer_pin, Note note, int beatsPerMinute, int onTime);

#endif
