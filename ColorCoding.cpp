#include "ColorCoding.h"

namespace TelCoColorCoder {
    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];

    // Externally declared sizes of the arrays
    extern int numberOfMajorColors;
    extern int numberOfMinorColors;

    // Function to get the color pair (MajorColor, MinorColor) from the pair number
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    // Function to get the pair number from the given MajorColor and MinorColor
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
}
