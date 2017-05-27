#ifndef Zelda_Theme_H
#define Zelda_Theme_H

#include "Song.h"

const Note ZeldaTheme[] PROGMEM = {
  // Measure 1
  {Frequency::f4      , Duration::Half       }, 
  {Frequency::f4      , Duration::Eight      }, 
  {Frequency::c4      , Duration::Eight      }, 
  {Frequency::c4      , Duration::Eight      }, 
  {Frequency::f4      , Duration::Eight      }, 

  // Measure 2
  {Frequency::g5      , Duration::Half       }, 
  {Frequency::c5      , Duration::Half       },

  // Measure 3
  {Frequency::c5      , Duration::Half       }, 
  {Frequency::c5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::f5      , Duration::Eight      }, 

  // Measure 4
  {Frequency::e5      , Duration::Half       }, 
  {Frequency::d5      , Duration::Half       },

  // Measure 5
  {Frequency::b4      , Duration::Half       }, 
  {Frequency::e5      , Duration::Quarter    }, 
  {Frequency::g5      , Duration::Quarter    }, 

  // Measure 6
  {Frequency::b5      , Duration::Half       }, 
  {Frequency::a5      , Duration::Quarter    }, 
  {Frequency::g5      , Duration::Quarter    }, 

  // Measure 7
  {Frequency::c5      , Duration::Half       }, 
  {Frequency::c5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::f5      , Duration::Eight      },

  // Measure 8
  {Frequency::e5      , Duration::Quarter    }, 
  {Frequency::None    , Duration::Half       }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      }, 

  // Measure 9
  {Frequency::c5      , Duration::Quarter    }, 
  {Frequency::a5      , Duration::QuarterPlus}, 
  {Frequency::g5      , Duration::Eight      }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      },

  // Measure 10
  {Frequency::b5      , Duration::QuarterPlus}, 
  {Frequency::g5      , Duration::Eight      }, 
  {Frequency::e5      , Duration::Quarter    }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      },

  // Measure 11
  {Frequency::c5      , Duration::Quarter    }, 
  {Frequency::c6      , Duration::QuarterPlus}, 
  {Frequency::b5      , Duration::Eight      }, 
  {Frequency::a5      , Duration::Eight      },
  {Frequency::f5      , Duration::Eight      },

  // Measure 12
  {Frequency::g5      , Duration::Whole      }, 

  // Measure 13
  {Frequency::c5      , Duration::Quarter    }, 
  {Frequency::a5      , Duration::QuarterPlus}, 
  {Frequency::g5      , Duration::Eight      }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      }, 

  // Measure 14
  {Frequency::b5      , Duration::QuarterPlus}, 
  {Frequency::g5      , Duration::Eight      }, 
  {Frequency::e6      , Duration::Quarter    }, 
  {Frequency::e6      , Duration::Eight      }, 
  {Frequency::d6      , Duration::Eight      }, 

  // Measure 15
  {Frequency::c6      , Duration::Quarter    }, 
  {Frequency::c6      , Duration::QuarterPlus}, 
  {Frequency::d6      , Duration::Eight      }, 
  {Frequency::e6      , Duration::Eight      }, 
  {Frequency::f6      , Duration::Eight      }, 

  // Measure 16
  {Frequency::e6      , Duration::Half       }, 
  {Frequency::d6      , Duration::Half       },

  // Measure 17
  {Frequency::b4      , Duration::Half       }, 
  {Frequency::e5      , Duration::Quarter    }, 
  {Frequency::g5      , Duration::Quarter    }, 

  // Measure 18
  {Frequency::g5      , Duration::Half       }, 
  {Frequency::c5      , Duration::Half       },

  // Measure 19
  {Frequency::c5      , Duration::Half       }, 
  {Frequency::c5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::f5      , Duration::Eight      }, 

  // Measure 20
  {Frequency::e5      , Duration::Half       }, 
  {Frequency::d5      , Duration::Half       },
  
  // Measure 21
  {Frequency::b4      , Duration::Half       }, 
  {Frequency::e5      , Duration::Quarter    }, 
  {Frequency::g5      , Duration::Quarter    }, 

  // Measure 22
  {Frequency::b5      , Duration::Half       }, 
  {Frequency::a5      , Duration::Quarter    }, 
  {Frequency::g5      , Duration::Quarter    }, 

  // Measure 23
  {Frequency::c5      , Duration::Half       }, 
  {Frequency::c5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::f5      , Duration::Eight      },

  // Measure 24
  {Frequency::e5      , Duration::Quarter    }, 
  {Frequency::None    , Duration::Half       }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      }, 

  // Measure 25
  {Frequency::c5      , Duration::Quarter    }, 
  {Frequency::a5      , Duration::QuarterPlus}, 
  {Frequency::g5      , Duration::Eight      }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      },

  // Measure 26
  {Frequency::b5      , Duration::QuarterPlus}, 
  {Frequency::g5      , Duration::Eight      }, 
  {Frequency::e5      , Duration::Quarter    }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      },

  // Measure 27
  {Frequency::c5      , Duration::Quarter    }, 
  {Frequency::c6      , Duration::QuarterPlus}, 
  {Frequency::b5      , Duration::Eight      }, 
  {Frequency::a5      , Duration::Eight      },
  {Frequency::f5      , Duration::Eight      },

  // Measure 28
  {Frequency::g5      , Duration::Whole      }, 

  // Measure 29
  {Frequency::c5      , Duration::Quarter    }, 
  {Frequency::a5      , Duration::QuarterPlus}, 
  {Frequency::g5      , Duration::Eight      }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      }, 

  // Measure 30
  {Frequency::b5      , Duration::QuarterPlus}, 
  {Frequency::g5      , Duration::Eight      }, 
  {Frequency::e6      , Duration::Quarter    }, 
  {Frequency::e6      , Duration::Eight      }, 
  {Frequency::d6      , Duration::Eight      }, 

  // Measure 31
  {Frequency::c6      , Duration::Quarter    }, 
  {Frequency::c6      , Duration::QuarterPlus}, 
  {Frequency::d6      , Duration::Eight      }, 
  {Frequency::e6      , Duration::Eight      }, 
  {Frequency::f6      , Duration::Eight      }, 

  // Measure 32
  {Frequency::e6      , Duration::Half       }, 
  {Frequency::d6      , Duration::Half       },

  // Measure 33
  {Frequency::b4      , Duration::Half       }, 
  {Frequency::e5      , Duration::Quarter    }, 
  {Frequency::g5      , Duration::Quarter    }, 

  // Measure 34
  {Frequency::g5      , Duration::Half       }, 
  {Frequency::c5      , Duration::Half       },

  // Measure 35
  {Frequency::c5      , Duration::Half       }, 
  {Frequency::c5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::f5      , Duration::Eight      }, 

  // Measure 36
  {Frequency::e5      , Duration::Half       }, 
  {Frequency::d5      , Duration::Half       },

  // Measure 37
  {Frequency::b4      , Duration::Half       }, 
  {Frequency::e5      , Duration::Quarter    }, 
  {Frequency::g5      , Duration::Quarter    }, 

  // Measure 38
  {Frequency::b5      , Duration::Half       }, 
  {Frequency::a5      , Duration::Quarter    }, 
  {Frequency::g5      , Duration::Quarter    }, 

  // Measure 39
  {Frequency::c5      , Duration::Half       }, 
  {Frequency::c5      , Duration::Eight      }, 
  {Frequency::d5      , Duration::Eight      }, 
  {Frequency::e5      , Duration::Eight      }, 
  {Frequency::f5      , Duration::Eight      },

  // Measure 40
  {Frequency::e5      , Duration::Half       }, 
  {Frequency::None    , Duration::Half       },

  // Measure 41
  {Frequency::e5      , Duration::Half       }, 
  {Frequency::a5      , Duration::Quarter    }, 
  {Frequency::c6      , Duration::Quarter    }, 

  // Measure 42
  {Frequency::c6      , Duration::Half       }, 
  {Frequency::f5      , Duration::Half       },

  // Measure 43
  {Frequency::f5      , Duration::Half       }, 
  {Frequency::f5      , Duration::Eight      }, 
  {Frequency::g5      , Duration::Eight      }, 
  {Frequency::a5      , Duration::Eight      }, 
  {Frequency::b5      , Duration::Eight      },

  // Measure 44
  {Frequency::a5      , Duration::Half       }, 
  {Frequency::g5      , Duration::Half       },

  // Measure 45
  {Frequency::e5      , Duration::Half       }, 
  {Frequency::a5      , Duration::Quarter    }, 
  {Frequency::c6      , Duration::Quarter    }, 

  // Measure 46
  {Frequency::e6      , Duration::Half       }, 
  {Frequency::d6      , Duration::Quarter    }, 
  {Frequency::c6      , Duration::Quarter    }, 

  // Measure 47
  {Frequency::f5      , Duration::Half       }, 
  {Frequency::f5      , Duration::Eight      }, 
  {Frequency::g5      , Duration::Eight      }, 
  {Frequency::a5      , Duration::Eight      }, 
  {Frequency::b5      , Duration::Eight      },

  // Measure 48
  {Frequency::a5      , Duration::Half       }, 
  {Frequency::g5      , Duration::Half       },

  // Measure 49
  {Frequency::a5      , Duration::Whole      },
};

#endif
