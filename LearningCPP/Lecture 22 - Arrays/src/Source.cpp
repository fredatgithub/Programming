#include <iostream>
#include <string>

int main() {
	std::cout << "int Array: " << std::endl;
	std::cout << "======================" << std::endl;
	int intArray[3]; // Contains 3 'elements'
	intArray[0] = 654;
	intArray[1] = 847;
	intArray[2] = 943;

	std::cout << "Element 0:\t" << intArray[0] << std::endl;
	std::cout << "Element 1:\t" << intArray[1] << std::endl;
	std::cout << "Element 2:\t" << intArray[2] << std::endl;


	std::cout << "\n\ndouble Array: " << std::endl;
	std::cout << "======================" << std::endl;
	double doubleArray[4] = {// Contains 4 'elements'
		4.5, 2.3,8.3, 9.2
	};

	for (int i = 0; i < 5; i++) {
		std::cout << "Element at index" << i << ":\t" << doubleArray[i] << std::endl;
	}

	std::cout << "\n\nInitializing with 0's Array: " << std::endl;
	std::cout << "======================" << std::endl;
	int numberArray[10] = {};

	for (int i = 0; i < 10; i++) {
		//numberArray[i] = i + 1;
		std::cout << "Element at index " << i << ":\t" << numberArray[i] << std::endl;
	}

	std::cout << "\n\nArray of Strings: " << std::endl;
	std::cout << "======================" << std::endl;
	std::string stringArray[]{
		"Hello", "I", "Love", "Programming", "So", "Much"
	};

	for (int i = 0; i < 6; i++) {
		std::cout << stringArray[i] << " ";
	}

	std::cin.get();
	return 0;
}