#include <iostream>
#include "CharArray.h"

CharArray::CharArray()
{
}

void CharArray::userInput()
{
	std::cout << "1. \tABC" << std::endl;
	std::cout << "2. \tText Array" << std::endl;
	std::cout << "Which would you like to see? ";
	std::cin >> this->userChoice;

	switch (this->userChoice)
	{
	case 1:
		this->abc();
		break;

	case 2:
		this->textArray();
		break;

	default:
		std::cout << "Invalid choice.." << std::endl;
		break;
	}
	
}

void CharArray::abc()
{
	this->limit = sizeof(this->textABC) / sizeof(char);

	for (int i = 0; i < this->limit; i++)
	{
		std::cout << i << ": \t" << this->textABC[i] << "\t||\tNumber: \t" << (int)this->textABC[i] << std::endl;
	}
}

void CharArray::textArray()
{
	std::cout << "Please put a word: ";
	std::cin >> this->inputArray;

	int increment = 0;
	while (true)
	{
		if (this->inputArray[increment] == 0)
		{
			break;
		}
	
		std::cout << increment << ": \t" << this->inputArray[increment] << "\t||\tNumber: \t" << (int)this->inputArray[increment] << std::endl;
		increment++;
	}
}
