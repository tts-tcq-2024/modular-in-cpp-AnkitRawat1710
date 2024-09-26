#include "ColorPair.h"
#include "ColorCoding.h"
#include <iostream>
#include <assert.h>

// Test function to verify the conversion of pair number to MajorColor and MinorColor
void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor) {
    TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

// Test function to verify the conversion of MajorColor and MinorColor to pair number
void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber) {
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

// Function to print reference manual (mapping each pair number to its corresponding MajorColor and MinorColor)
void PrintReferenceManual() {
void PrintReferenceManual() {
    for (int i = 1; i <= 25; ++i) {
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i);
        std::cout << "Pair Number: " << i << " - " << colorPair.ToString() << std::endl;
    }
}

int main(){
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    PrintReferenceManual();

    return 0;
}
