#ifndef Mario_H
#define Mario_H

#include "Song.h"

const Note Mario[] PROGMEM = {
  // Measure 1
  {Frequency::e5      , Duration::Eight      },
  {Frequency::e5      , Duration::Eight      },
  {Frequency::None    , Duration::Eight      },
  {Frequency::e5      , Duration::Eight      },
  {Frequency::None    , Duration::Eight      },
  {Frequency::c5      , Duration::Eight      },
  {Frequency::e5      , Duration::Quarter    },

  // Measure 2
  {Frequency::g5      , Duration::Quarter    },
  {Frequency::None    , Duration::Quarter    },
  {Frequency::g4      , Duration::Quarter    },
  {Frequency::None    , Duration::Quarter    },

  // Measure 3
  {Frequency::c5      , Duration::QuarterPlus},
  {Frequency::g4      , Duration::Eight      },
  {Frequency::None    , Duration::Quarter    },
  {Frequency::e4      , Duration::QuarterPlus},

  // Measure 4
  {Frequency::a4      , Duration::Quarter    },
  {Frequency::b4      , Duration::Eight      },
  {Frequency::b4      , Duration::Eight      },
  {Frequency::b4_Flat , Duration::Eight      },
  {Frequency::a4      , Duration::Quarter    },

  // Measure 5
  {Frequency::g4      , Duration::Quarter    },
  {Frequency::e5      , Duration::Quarter    },
  {Frequency::g5      , Duration::Quarter    },
  {Frequency::a5      , Duration::Quarter    },
  {Frequency::f5      , Duration::Eight      },
  {Frequency::g5      , Duration::Eight      },
  
  // Measure 6
  {Frequency::None    , Duration::Quarter    },
  {Frequency::e5      , Duration::Quarter    },
  {Frequency::c5      , Duration::Eight      },
  {Frequency::d5      , Duration::Eight      },
  {Frequency::b4      , Duration::Quarter    },
  {Frequency::None    , Duration::Eight      },
  
  // Measure 7
  {Frequency::c5      , Duration::QuarterPlus},
  {Frequency::g4      , Duration::Eight      },
  {Frequency::None    , Duration::Quarter    },
  {Frequency::e4      , Duration::QuarterPlus},
  
  // Measure 8
  {Frequency::a4      , Duration::Quarter    },
  {Frequency::b4      , Duration::Quarter    },
  {Frequency::b4_Flat , Duration::Eight      },
  {Frequency::a4      , Duration::Quarter    },
  
  // Measure 9
  {Frequency::g4      , Duration::Quarter    },
  {Frequency::e5      , Duration::Quarter    },
  {Frequency::g5      , Duration::Quarter    },
  {Frequency::a5      , Duration::Quarter    },
  {Frequency::f5      , Duration::Eight      },
  {Frequency::g5      , Duration::Eight      },
  
  // Measure 10
  {Frequency::None    , Duration::Eight      },
  {Frequency::e5      , Duration::Quarter    },
  {Frequency::c5      , Duration::Eight      },
  {Frequency::d5      , Duration::Eight      },
  {Frequency::b5      , Duration::Quarter    },
  {Frequency::None    , Duration::Eight      },
  
  // Measure 11
  {Frequency::None    , Duration::Quarter    },
  {Frequency::g5      , Duration::Eight      },
  {Frequency::g5_Flat , Duration::Eight      },
  {Frequency::f5      , Duration::Eight      },
  {Frequency::d5_Sharp, Duration::Quarter    },
  {Frequency::e5      , Duration::Eight      },
  
  // Measure 12
  {Frequency::None    , Duration::Eight      },
  {Frequency::g4_Sharp, Duration::Eight      },
  {Frequency::a4      , Duration::Eight      },
  {Frequency::c5      , Duration::Eight      },
  {Frequency::None    , Duration::Eight      },
  {Frequency::a4      , Duration::Eight      },
  {Frequency::c5      , Duration::Eight      },
  {Frequency::d5      , Duration::Eight      },
  
  // Measure 13
  {Frequency::None    , Duration::Quarter    },
  {Frequency::g5      , Duration::Eight      },
  {Frequency::g5_Flat , Duration::Eight      },
  {Frequency::f5      , Duration::Eight      },
  {Frequency::d5_Sharp, Duration::Quarter    },
  {Frequency::e5      , Duration::Eight      },
  
  // Measure 14
  {Frequency::None    , Duration::Eight      },
  {Frequency::c6      , Duration::Eight      },
  {Frequency::None    , Duration::Eight      },
  {Frequency::c6      , Duration::Eight      },
  {Frequency::c6      , Duration::Half       },
  
  // Measure 15
  {Frequency::None    , Duration::Quarter    },
  {Frequency::g5      , Duration::Eight      },
  {Frequency::g5_Flat , Duration::Eight      },
  {Frequency::f5      , Duration::Eight      },
  {Frequency::d5_Sharp, Duration::Quarter    },
  {Frequency::e5      , Duration::Eight      },
  
  // Measure 16
  {Frequency::None    , Duration::Eight      },
  {Frequency::g4_Sharp, Duration::Eight      },
  {Frequency::a4      , Duration::Eight      },
  {Frequency::c5      , Duration::Eight      },
  {Frequency::None    , Duration::Eight      },
  {Frequency::a4      , Duration::Eight      },
  {Frequency::c5      , Duration::Eight      },
  {Frequency::d5      , Duration::Eight      },
};

#endif