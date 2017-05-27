#ifndef HappyBirthday_H
#define HappyBirthday_H

#include "Song.h"

const Note HappyBirthday[25] PROGMEM = {
  {Frequency::d4, Duration::Eight  }, 
  {Frequency::d4, Duration::Eight  },
  {Frequency::e4, Duration::Quarter},
  {Frequency::d4, Duration::Quarter},
  {Frequency::g4, Duration::Quarter},
  {Frequency::f4, Duration::Half   },
  
  {Frequency::d4, Duration::Eight  }, 
  {Frequency::d4, Duration::Eight  },
  {Frequency::e4, Duration::Quarter},
  {Frequency::d4, Duration::Quarter},
  {Frequency::a4, Duration::Quarter},
  {Frequency::g4, Duration::Half   },

  {Frequency::d4, Duration::Eight  }, 
  {Frequency::d4, Duration::Eight  },
  {Frequency::d5, Duration::Quarter},
  {Frequency::b4, Duration::Quarter},
  {Frequency::g4, Duration::Quarter},
  {Frequency::f4, Duration::Quarter},
  {Frequency::e4, Duration::Quarter},

  {Frequency::c5, Duration::Eight  }, 
  {Frequency::c5, Duration::Eight  },
  {Frequency::b4, Duration::Quarter},
  {Frequency::g4, Duration::Quarter},
  {Frequency::a4, Duration::Quarter},
  {Frequency::g4, Duration::Quarter}
};

#endif