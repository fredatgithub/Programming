#include <iostream>

void determine_even(int number) {

	if(number % 2 == 0) {
		std::cout << "This number is even.\n";
	}
	else {
		std::cout << "This number is not even.\n";
	}

}

int main(int argc, char const *argv[]) {
	std::cout << "Please enter a number: ";
	int number;
	std::cin >> number;

	determine_even(number);

	std::cin.get();
	std::cin.get();
	return 0;
}