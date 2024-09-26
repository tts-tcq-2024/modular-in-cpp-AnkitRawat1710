#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <string>

namespace TelCoColorCoder {

    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

   // Class to represent a pair of MajorColor and MinorColor
    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        // Constructor
        ColorPair(MajorColor major, MinorColor minor);

        // Getters
        MajorColor getMajor();
        MinorColor getMinor();

        // Converts the color pair to a string representation
        std::string ToString();
    };

    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];

    // Externally declared sizes of the arrays
    extern int numberOfMajorColors;
    extern int numberOfMinorColors;
}

#endif
