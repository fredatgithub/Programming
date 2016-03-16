#include <iostream>

int main() {

	const int row = 2;
	const int col = 5;
	
	int table[row][col] = {
		{ 3, 6, 6, 6, 7 },
		{ 3, 8, 7, 9, 3 }
	};
	
	std::cout << "Size of the table:\t" << sizeof(table) << std::endl;
	std::cout << "The size of an int:\t" << sizeof(int) << std::endl;

	std::cout << "\nArray: " << std::endl;
	std::cout << "=================================" << std::endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << table[i][j] << "\t"; // Prints the table to the console
		}
		std::cout << std::endl << std::endl;
	}
	

	std::cin.get();
	return 0;
}