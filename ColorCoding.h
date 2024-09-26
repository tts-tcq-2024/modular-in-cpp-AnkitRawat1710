#ifndef COLORCODING_H
#define COLORCODING_H

#include "ColorPair.h"

namespace TelCoColorCoder {
    // Function declarations for color-pair to number and number to color-pair conversion
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}

#endif
