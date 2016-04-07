#pragma once
#ifndef REVERSESTRING_H_
#define REVERSESTRING_H_

class ReverseString
{
private:
	char text[10000];							// Limits to 1000 chars
	int nChars = sizeof(this->text) - 1;		// Gets the number of chars in the array
	char save;									// Holds the last char used

	
	char *pStart = this->text;
	char *pEnd = this->text + this->nChars - 1;

public:
	ReverseString();

	void userInput();
	void reverse();
	void print();

};
#endif // !REVERSESTRING_H_