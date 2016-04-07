#include <iostream>
#include <algorithm> // reverse
#include "ReverseString.h"

ReverseString::ReverseString()
{
}

void ReverseString::userInput()
{
	std::cout << "Enter a line of text: ";
	std::getline(std::cin, this->input);

	this->rInput = this->input;
	
	ReverseString::reverse();
}

void ReverseString::reverse()
{
	std::reverse(this->rInput.begin(), this->rInput.end());
	ReverseString::print();
}

void ReverseString::print()
{
	std::cout << "Normal Input:\t" << this->input << std::endl;
	std::cout << "Reversed Input:\t" << this->rInput << std::endl;
}

