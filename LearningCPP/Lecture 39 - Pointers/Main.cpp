#include <iostream>
#include "RandomNumber.h"

int main()
{
	RandomNumber random;

	int variable = 66;
	
	std::cout << "Value of the variable before randomization: " << variable << std::endl;

	random.randomNumber(&variable);
	std::cout << "Value of the variable after randomization: " << variable << std::endl;

	system("pause");
	return 0;
}