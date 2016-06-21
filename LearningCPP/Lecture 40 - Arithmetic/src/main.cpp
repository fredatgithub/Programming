#include <iostream>
#include "../include/SecondConverter.h"

int main() {
    int seconds = 9653229;

    SecondConverter converter;

    // Pass the memory function to the pointer (points to this location)
    converter.convert(&seconds);

    // Output the info
    std::cout << converter.toString();
    return 0;
}