#ifndef Pokemon_H
#define Pokemon_H

#include "Song.h"

const Note Pokemon[] PROGMEM = {
  // Measure 1
  {Frequency::None    , Duration::Eight      },
  {Frequency::b4      , Duration::Eight      },
  {Frequency::b4      , Duration::Eight      },
  {Frequency::b4      , Duration::Eight      },
  {Frequency::b4      , Duration::QuarterPlus},
  {Frequency::b4      , Duration::Eight      },

  // Measure 2
  {Frequency::a4      , Duration::Quarter    },
  {Frequency::f4      , Duration::Eight      },
  {Frequency::d4      , Duration::Half       },
  {Frequency::d4      , Duration::Eight      },

  // Measure 3
  {Frequency::b4      , Duration::Quarter    },
  {Frequency::b4      , Duration::Quarter    },
  {Frequency::a4      , Duration::Eight      },
  {Frequency::g4      , Duration::Eight      },
  {Frequency::a4      , Duration::Quarter    },

  // Measure 4
  {Frequency::None    , Duration::Whole      },

  // Measure 5
  {Frequency::None    , Duration::Eight      },
  {Frequency::g4      , Duration::Eight      },
  {Frequency::c5      , Duration::Quarter    },
  {Frequency::c5      , Duration::Quarter    },
  {Frequency::c5      , Duration::Eight      },
  {Frequency::b4      , Duration::Quarter    },

  // Measure 6
  {Frequency::a4      , Duration::Quarter    },
  {Frequency::g4      , Duration::Half       },
  {Frequency::g4      , Duration::Eight      },

  // Measure 7
  {Frequency::b4      , Duration::Quarter    },
  {Frequency::b4      , Duration::Eight      },
  {Frequency::a4      , Duration::Quarter    },
  {Frequency::g4      , Duration::Eight      },
  {Frequency::b4      , Duration::Quarter    },

  // Measure 8
  {Frequency::b4      , Duration::Whole      },

  // Measure 9
  {Frequency::None    , Duration::Quarter    },
  {Frequency::b4      , Duration::Eight      },
  {Frequency::b4      , Duration::Eight      },
  {Frequency::b4      , Duration::Eight      },
  {Frequency::b4      , Duration::Quarter    },
  {Frequency::b4      , Duration::Eight      },

  // Measure 10
  {Frequency::a4      , Duration::Quarter    },
  {Frequency::f4      , Duration::Eight      },
  {Frequency::d4      , Duration::Eight      },
  {Frequency::d4      , Duration::Half       },

  // Measure 11
  {Frequency::b4      , Duration::Eight      },
  {Frequency::b4      , Duration::QuarterPlus},
  {Frequency::a4      , Duration::Quarter    },
  {Frequency::g4      , Duration::Eight      },
  {Frequency::g4      , Duration::Eight      },

  // Measure 12
  {Frequency::a4      , Duration::Half       },
  {Frequency::None    , Duration::Half       },

  // Measure 13
  {Frequency::None    , Duration::Eight      },
  {Frequency::c5      , Duration::Eight      },
  {Frequency::c5      , Duration::Eight      },
  {Frequency::c5      , Duration::Eight      },
  {Frequency::c5      , Duration::QuarterPlus},
  {Frequency::c5      , Duration::Eight      },

  // Measure 14
  {Frequency::b4      , Duration::Quarter    },
  {Frequency::a4      , Duration::Eight      },
  {Frequency::g4      , Duration::Half       },
  {Frequency::g4      , Duration::Eight      },

  // Measure 15
  {Frequency::b4      , Duration::Quarter    },
  {Frequency::b4      , Duration::Eight      },
  {Frequency::a4      , Duration::Quarter    },
  {Frequency::g4      , Duration::Eight      },
  {Frequency::b4      , Duration::HalfPlus   },

  // Measure 16
  {Frequency::None    , Duration::Eight      },
  {Frequency::a4      , Duration::Eight      },
  {Frequency::d5      , Duration::Eight      },
  {Frequency::e5      , Duration::Eight      },
};

#endif
