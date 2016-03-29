#include <iostream>
#include "SecondConverter.h"

// Taking a larger set of seconds and converting it to Hours, Minutes, Seconds...

/*
* +
* -
* *
* /
* +=
* -=
* /=
* *=
* %
* %=
* precedence
*/

int main()
{
	int seconds;
	std::cout << "Enter number of seconds: ";
	std::cin >> seconds;
	
	SecondConverter convert;
	convert.convert(seconds);
	std::cout << convert.toString() << std::endl;;
	
	system("pause");
	return 0;
}