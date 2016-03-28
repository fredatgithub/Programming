#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

void randomNumber(int *pValue) // points to the location of the value inputed
{
	*pValue = rand() % 100 + 1; // Randomizes the value that is inputed 
}

int main()
{
	srand(time(NULL));

	int variable = 66;
	
	std::cout << "Value of the variable before randomization: " << variable << std::endl;

	randomNumber(&variable); // Gets the location OF the int variable
	std::cout << "Value of the variable after randomization: " << variable << std::endl;

	system("pause");
	return 0;
}