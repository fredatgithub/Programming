#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

#include "RandomNumber.h"

RandomNumber::RandomNumber()
{
}

int RandomNumber::randomNumber(int *pValue)
{
	srand(time(NULL)); // Gives true randomization

	*pValue = rand() % 10000 - 1;

	return this->pValue;
}
