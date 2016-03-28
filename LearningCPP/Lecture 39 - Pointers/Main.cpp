#include <iostream>
#include "RandomNumber.h"

int main()
{
	int variable = 66;
	std::cout << "Value of the variable before randomization: " << variable << std::endl;

	RandomNumber random;
	random.randomNumber(&variable); // Get the memory location of 'int variable' and gives it to the pointer
	std::cout << "Value of the variable after randomization: " << variable << std::endl;

	system("pause");
	return 0;
}