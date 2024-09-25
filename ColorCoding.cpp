#include "ColorCoding.h"

namespace TelCoColorCoder {
    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];

    // Externally declared sizes of the arrays
    extern int numberOfMajorColors;
    extern int numberOfMinorColors;

    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        //return major * numberOfMinorColors + minor + 1;
    }
}
