#include <iostream>

int main() {
	const int row = 4;
	const int col = 8;
	int myArray[row][col] = {
		{77, 3, 4, 7, 6, 50, 21, 3},
		{5, 16, 46, 64, 2, 32, 4, 7},
		{88, 92, 37, 1, 47, 8, 35, 1},
		{63, 86, 7, 2, 3, 6, 7, 77}
	};

	std::cout << "Size of myArray:\t\t\t" << sizeof(myArray) << std::endl;
	std::cout << "Size of an int:\t\t\t\t" << sizeof(int) << std::endl;

	int formula = sizeof(myArray) / sizeof(int);
	std::cout << "Total amount of int's in myArray:\t" << formula << std::endl;

	std::cout << "\nmyArray: " << std::endl;
	std::cout << "=========================================================" << std::endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << myArray[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	std::cin.get();
	return 0;
}