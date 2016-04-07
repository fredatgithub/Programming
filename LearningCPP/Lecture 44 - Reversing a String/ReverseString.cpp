#include <iostream>
#include "ReverseString.h"

ReverseString::ReverseString()
{
}

void ReverseString::userInput()
{
	std::cout << "Enter a line of text: ";
	std::cin >> this->text;
}

void ReverseString::reverse()
{
	while (pStart < pEnd)
	{
		// Save keeps pStart from being overriden so we cant read it
		this->save = *pStart;
		*pStart = *pEnd;
		*pEnd = this->save;

		pStart++;
		pEnd--;
	}
	
	ReverseString::print();
}

void ReverseString::print()
{
	std::cout << this->text << std::endl;
}

