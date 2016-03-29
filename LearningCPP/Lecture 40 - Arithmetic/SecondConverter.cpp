#include <sstream>
#include "SecondConverter.h"



SecondConverter::SecondConverter()
{
	SecondConverter::convert(seconds);

	SecondConverter::toMinutes(seconds);
	SecondConverter::toHours(minutes);
}

int SecondConverter::convert(int seconds)
{
	this->seconds = seconds;

	SecondConverter::toMinutes(seconds);

	return seconds;
}

int SecondConverter::toMinutes(int seconds)
{
	this->minutes = this->seconds / 60;
	this->seconds = this->seconds % 60;

	SecondConverter::toHours(minutes);

	return this->minutes;
}

int SecondConverter::toHours(int minutes)
{
	this->hours = this->minutes / 60;
	this->minutes = this->minutes % 60;

	return this->hours;
}

std::string SecondConverter::toString()
{
	std::stringstream ss;
	ss << "Hours: " << this->hours << std::endl;
	ss << "Minutes: " << this->minutes << std::endl;
	ss << "Seconds: " << this->seconds << std::endl;
	ss << std::endl;

	std::string toString = ss.str();

	return toString;
}

