//
// Created by ellis on 6/21/2016.
//

#include <sstream>
#include "../include/SecondConverter.h"

SecondConverter::SecondConverter() {
}

int SecondConverter::convert(int *seconds) {
    // Dereference the pointer to get the value that was inputted
    this->seconds = *seconds;

    // Pass the value of seconds to be converted into minutes
	SecondConverter::toMinutes(&this->seconds);

	return this->seconds;
}

int SecondConverter::toMinutes(int *seconds) {
    // divide the amount of seconds by 60 to get the minutes
	this->minutes = *seconds / 60;

    // Get the remainder of seconds and set seconds equal to it
	this->seconds = *seconds % 60;

    // Pass the memory location of the minutes
	SecondConverter::toHours(&this->minutes);

	return this->minutes;
}

int SecondConverter::toHours(int *minutes) {
    // Dereference the minutes to get their value and then divide them by 60 to get the hours
	this->hours = *minutes / 60;

    // Get the remainder of minutes and set minutes equal to it
	this->minutes = *minutes % 60;

    // Pass the memory location of the hours
	SecondConverter::toDays(&this->hours);

	return this->hours;
}

int SecondConverter::toDays(int *hours) {
    // Dereference the hours and then divide them by 24 to get the number of days
	this->days = *hours / 24;

    // Get the remainder of hours and set the hours equal to it
    this->hours = *hours % 24;

	return this->days;
}

// Print it all out
std::string SecondConverter::toString() {
    std::stringstream ss;
    ss << "Days: " << this->days << std::endl;
    ss << "Hours: " << this->hours << std::endl;
    ss << "Minutes: " << this->minutes << std::endl;
    ss << "Seconds: " << this->seconds << std::endl;
    ss << std::endl;

    std::string toString = ss.str();

    return toString;
}





