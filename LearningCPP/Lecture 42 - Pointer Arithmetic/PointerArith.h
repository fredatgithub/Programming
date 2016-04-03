#pragma once
#ifndef POINTERARITH_H_
#define POINTERARITH_H_

#include <string>

class PointerArith
{
private:
	std::string texts[7] = {"zero", "one", "two", "three", "four", "five", "six"};
	std::string *pTexts = texts; // This pointer points to the texts array
	
	const int limit = sizeof(texts) / sizeof(std::string);
	

public:
	PointerArith();

	void showValues();
	void pointerArith();
	void userChoice();
};

#endif // !POINTERARITH_H_



