#include <sstream>
#include "SecondConverter.h"



SecondConverter::SecondConverter()
{
	SecondConverter::convert(&seconds);
	SecondConverter::toMinutes(&seconds);
	SecondConverter::toHours(&minutes);
}

int SecondConverter::convert(int* seconds)
{
	this->seconds = *seconds; // Assigns seconds to the seconds variable

	SecondConverter::toMinutes(seconds); // Passes the seconds to the "toMinutes" method
	return *seconds;
}

int SecondConverter::toMinutes(int* seconds)
{
	this->minutes = this->seconds / 60; // Gets the amount of minutes there are based on the seconds
	this->seconds = this->seconds % 60; // Gets the remainder of the seconds after the minutes divide the others away

	SecondConverter::toHours(&minutes); // Passes the minutes to the "toHours" method
	return this->minutes;
}

int SecondConverter::toHours(int* minutes)
{
	this->hours = this->minutes / 60; // Gets the amount of hours there are based on the minutes
	this->minutes = this->minutes % 60; // Gets the remainder of the minutes after the hours divide the others away

	return this->hours;
}

std::string SecondConverter::toString()
{
	std::stringstream ss;
	ss << this->hours << " : " << this->minutes << " : " << this->seconds << std::endl;

	std::string toString = ss.str();
	return toString;
}

