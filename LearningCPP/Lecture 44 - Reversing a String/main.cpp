#include <iostream>
#include "ReverseString.h"

int main()
{
	ReverseString reverse;
	reverse.userInput();
	reverse.reverse();
	reverse.print();

	system("pause");
	return 0;
}