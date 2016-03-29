#include <iostream>
#include "SecondConverter.h"

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
	// Taking a larger set of seconds and converting it to Hours, Minutes, Seconds...

	int seconds = 19365;
	
	SecondConverter convert;
	convert.convert(seconds);
	std::cout << convert.toString();
	


	system("pause");
	return 0;
}