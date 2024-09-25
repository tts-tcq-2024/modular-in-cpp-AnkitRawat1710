#ifndef COLORCODING_H
#define COLORCODING_H

#include "ColorPair.h"

namespace TelCoColorCoder {
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}

#endif
