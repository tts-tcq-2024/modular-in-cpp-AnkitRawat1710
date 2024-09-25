#include "ColorPair.h"

namespace TelCoColorCoder {

    // Constructor definition
    ColorPair::ColorPair(MajorColor major, MinorColor minor) :
        majorColor(major), minorColor(minor)
    {}

    // Getter for MajorColor
    MajorColor ColorPair::getMajor() {
        return majorColor;
    }

    // Getter for MinorColor
    MinorColor ColorPair::getMinor() {
        return minorColor;
    }

    // ToString method implementation
    std::string ColorPair::ToString() {
        std::string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }
}
