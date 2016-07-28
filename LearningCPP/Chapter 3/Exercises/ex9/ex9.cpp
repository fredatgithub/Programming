#include <iostream>

void digit_to_string(int input) {
	if(input == 0) {
		std::cout << "Zero\n";
	}

	if(input == 1) {
		std::cout << "One\n";
	}

	if(input == 2) {
		std::cout << "Two\n";
	}

	if(input == 3) {
		std::cout << "Three\n";
	}

	if(input == 4) {
		std::cout << "Four\n";
	}

	else {
		std::cout << "This is actually just a program that does it 1-4, so a human made it and was too lazy to go any higher.\n";
	}
}

int main(int argc, char const *argv[]) {
	std::cout << "Please enter a number: ";
	int number;
	std::cin >> number;

	digit_to_string(number);

	std::cin.get();
	std::cin.get();
	return 0;
}