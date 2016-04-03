#include <stdlib.h> // srand, rand
#include <time.h> // time

#include "RandomNumber.h"


RandomNumber::RandomNumber()
{
}

int RandomNumber::randomNumber(int *pValue)
{
	srand(time(NULL)); // Gives true randomization

	*pValue = rand() % 100 - 1; // Dereference the value so that we can set the value to a random number

	return this->pValue; // Return the value
}
