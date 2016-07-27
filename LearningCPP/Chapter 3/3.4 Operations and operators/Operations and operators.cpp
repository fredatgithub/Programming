#include <iostream>
#include <string.h>
#include <math.h> // pow(), sqrt()

// Show the operations that are widely used for doubles
void double_operations() {
	std::cout << "Please enter your floating-point value: ";
	double n;
	std::cin >> n;

	std::cout << "n == " << n
				<< "\nn + 1 == " << n + 1
				<< "\nn * 3 == " << n * 3
				<< "\nn twice == " << pow(n, 2)
				<< "\nn squared == " << n * n
				<< "\nHalf of n == " << n / 2
				<< "\nSquare root of n == " << sqrt(n)
				<< "\n"; // Create a newline
}

// Show the operations for strings by using names
void string_operations() {
	std::cout << "Please enter your first and last names: ";
	std::string first_name, last_name;
	std::cin >> first_name >> last_name;

	std::string name = first_name + ' ' + last_name;
	std::cout << "Hello, " << name << std::endl;
}

// Show how to compare strings
void compare_strings() {
	std::cout << "Please enter two words: ";
	std::string first, second;
	std::cin >> first >> second;

	if(first == second) {
		std::cout << "Please dont input the same words twice...\n";
		compare_strings();
	}

	if(first < second) {
		std::cout << first << " is alphabetically before " << second << ".\n";
	}

	if(first > second) {
		std::cout << first << " is alphabetically after " << second << ".\n";
	}
}

// Simple program to help exercise operators
int main(int argc, char const *argv[]) {
	
	string_operations();
	compare_strings();
	double_operations();

	std::cin.get();
	std::cin.get();
	return 0;
}