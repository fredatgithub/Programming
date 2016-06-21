//
// Created by ellis on 6/21/2016.
//

#ifndef LECTURE_40_ARITHMETIC_SECONDCONVERTER_H
#define LECTURE_40_ARITHMETIC_SECONDCONVERTER_H

#include <string>

class SecondConverter {

private: // Variables

    int seconds;
    int minutes;
    int hours;
    int days;


public: // Public Functions
    SecondConverter();
    int convert(int *seconds);
    std::string toString();

private: // Private functions
    int toMinutes(int *seconds);
    int toHours(int *minutes);
    int toDays (int *hours);


};


#endif //LECTURE_40_ARITHMETIC_SECONDCONVERTER_H
