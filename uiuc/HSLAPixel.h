/**
 * @file HSLAPixel.h
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  //HSLAPixel class definition.
  class HSLAPixel {
    public:
      double h;  // angle in degrees, [0, 360]
      double s;  // [0, 1]
      double l;  // [0, 1]
      double a;  // [0, 1]
  };


}
