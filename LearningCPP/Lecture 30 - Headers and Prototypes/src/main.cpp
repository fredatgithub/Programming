#include <iostream>
#include "../include/pythagoreanTheorem.h"

/*
	Pythagorean Theorem: a^2 + b^2 = c^2
*/
int main() {
	double a, b, c;

	std::cout << "Enter a: ";
	std::cin >> a;

	std::cout << "Enter b: ";
	std::cin >> b;


	c = pythagoreanTheorem(a, b);

	std::cout << a << "^2 + " << b << "^2 = " << c;
	
	std::cin.get();
	std::cin.get();
	return 0;
}