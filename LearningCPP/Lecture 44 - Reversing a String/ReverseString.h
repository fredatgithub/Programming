#pragma once
#ifndef REVERSESTRING_H_
#define REVERSESTRING_H_

#include <string>
class ReverseString
{
private:
	std::string input;
	std::string rInput;

public:
	ReverseString();

	void userInput();
	void reverse();
	void print();

};
#endif // !REVERSESTRING_H_