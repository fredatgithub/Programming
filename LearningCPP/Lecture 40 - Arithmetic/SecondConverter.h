#pragma once
#ifndef SECONDCONVERTER_H_

#include <string>


class SecondConverter
{
public:
	int seconds;
	int minutes;
	int hours;

public:
	SecondConverter();
	
	int convert(int seconds);
	
	int toMinutes(int seconds);
	int toHours(int minutes);

	std::string toString();
};

#endif // !SECONDCONVERTER_H_