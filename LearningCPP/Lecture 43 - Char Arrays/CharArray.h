#pragma once
#ifndef CHARARRAY_H_
#define CHARARRAY_H_

//#include <string>

class CharArray
{
private:
	int userChoice;

	int limit;
	char textABC[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',  'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	char inputArray[1000]; // Gave it a high number so that it has room for large words
	

public:
	CharArray();

	void userInput();
	void abc();
	void textArray();
};
#endif // !CHARARRAY_H_