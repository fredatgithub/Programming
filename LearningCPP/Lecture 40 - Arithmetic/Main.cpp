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


/*
double value1 = (double)7 / 2; // Casting 7 as a double so that we get decimals
std::cout << "Casting an int to a double: " << value1 << std::endl;

int value2 = (int)7.3;
std::cout << "Casting a double to an int: " << value2 << std::endl;

int value3 = 32;
value3 += 1; // Same as "value3 = value3 + 1" or "value3++";
std::cout << "Value 3: " << value3 << std::endl;

int value4 = 82;
value4 -= 8; // Same as "value4 = value4 - 8;"
std::cout << "Value 4: " << value4 << std::endl;

int value5 = 64;
value5 /= 4; // Same as "value5 = value5 / 5;"
std::cout << "Value 5: " << value5 << std::endl;

int value6 = 9;
value6 *= 7; // Same as "value6 = value6 * 7;
std::cout << "Value 6: " << value6 << std::endl;

int value7 = 12 % 5; // Shows the remainder
std::cout << "Value 7: " << value7 << std::endl;
*/





int main()
{
	int seconds;
	std::cout << "Enter number of seconds: ";
	std::cin >> seconds;
	
	SecondConverter convert;
	convert.convert(&seconds);
	std::cout << convert.toString() << std::endl;;
	
	system("pause");
	return 0;
}