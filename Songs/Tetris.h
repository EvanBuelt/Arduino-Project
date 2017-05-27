#ifndef Tetris_H
#define Tetris_H

#include "Song.h"

const Note Tetris[59] PROGMEM = {
  // Measure 1
  {Frequency::e5      , Duration::Quarter    }, // 0
  {Frequency::b4      , Duration::Eight      }, // 1
  {Frequency::c5      , Duration::Eight      }, // 2
  {Frequency::d5      , Duration::Quarter    }, // 3
  {Frequency::c5      , Duration::Eight      }, // 4
  {Frequency::b4      , Duration::Eight      }, // 5
  
  // Measure 2
  {Frequency::a4      , Duration::Quarter    }, // 6
  {Frequency::a4      , Duration::Eight      }, // 7
  {Frequency::c5      , Duration::Eight      }, // 8
  {Frequency::e5      , Duration::Quarter    }, // 9
  {Frequency::d5      , Duration::Eight      }, // 10
  {Frequency::c5      , Duration::Eight      }, // 11
  
  // Measure 3
  {Frequency::b4      , Duration::QuarterPlus}, // 12
  {Frequency::c5      , Duration::Eight      }, // 13
  {Frequency::d5      , Duration::Quarter    }, // 14
  {Frequency::e5      , Duration::Quarter    }, // 15
  
  // Measure 4
  {Frequency::c5      , Duration::Quarter    }, // 16
  {Frequency::a4      , Duration::Quarter    }, // 17
  {Frequency::a4      , Duration::Quarter    }, // 18
  {Frequency::b4      , Duration::Eight      }, // 19
  {Frequency::c5      , Duration::Eight      }, // 20
  
  // Measure 5
  {Frequency::d5      , Duration::QuarterPlus}, // 22
  {Frequency::f5      , Duration::Eight      }, // 23
  {Frequency::a5      , Duration::Quarter    }, // 24
  {Frequency::g5      , Duration::Eight      }, // 25
  {Frequency::f5      , Duration::Eight      }, // 26
  
  // Measure 6
  {Frequency::e5      , Duration::QuarterPlus}, // 27
  {Frequency::c5      , Duration::Eight      }, // 28
  {Frequency::e5      , Duration::Quarter    }, // 29
  {Frequency::d5      , Duration::Eight      }, // 30
  {Frequency::c5      , Duration::Eight      }, // 31
  
  // Measure 7
  {Frequency::b4      , Duration::Quarter    }, // 32
  {Frequency::b4      , Duration::Eight      }, // 33
  {Frequency::c5      , Duration::Eight      }, // 34
  {Frequency::d5      , Duration::Quarter    }, // 35
  {Frequency::e5      , Duration::Quarter    }, // 36
  
  // Measure 8
  {Frequency::c5      , Duration::Quarter    }, // 37
  {Frequency::a4      , Duration::Quarter    }, // 38
  {Frequency::a4      , Duration::Quarter    }, // 39
  {Frequency::None    , Duration::Quarter    }, // 40
  
  // Measure 9
  {Frequency::e5      , Duration::Half       }, // 41
  {Frequency::c5      , Duration::Half       }, // 42
  
  // Measure 10
  {Frequency::d5      , Duration::Half       }, // 43
  {Frequency::b4      , Duration::Half       }, // 44
  
  // Measure 11
  {Frequency::c5      , Duration::Half       }, // 45
  {Frequency::a4      , Duration::Half       }, // 46
  
  // Measure 12
  {Frequency::g4_Sharp, Duration::Half       }, // 47
  {Frequency::b4      , Duration::Quarter    }, // 48
  {Frequency::None    , Duration::Quarter    }, // 49
  
  // Measure 13
  {Frequency::e5      , Duration::Half       }, // 50
  {Frequency::c5      , Duration::Half       }, // 51
  
  // Measure 14
  {Frequency::d5      , Duration::Half       }, // 52
  {Frequency::b4      , Duration::Half       }, // 53
  
  // Measure 15
  {Frequency::c5      , Duration::Quarter    }, // 54
  {Frequency::e5      , Duration::Quarter    }, // 55
  {Frequency::g5      , Duration::Half       }, // 56
  
  // Measure 16
  {Frequency::f5_Sharp, Duration::Half       }, // 57
  {Frequency::None    , Duration::Half       }, // 58
};

#endif