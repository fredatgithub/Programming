#pragma once
#ifndef RANDOMNUMBER_H_
#define RANDOMNUMBER_H_

class RandomNumber
{
private:
	int pValue; // This is the value that the location of the int will be held in
	int rValue; // The value that is returned

public:
	RandomNumber();

	int randomNumber(int *pValue);
};

#endif // !RANDOMNUMBER_H_




