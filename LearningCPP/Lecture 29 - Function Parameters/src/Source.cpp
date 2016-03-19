#include <iostream>
#include <string>

void showMenu() {
	// The food menu
	const int row = 10;
	const int col = 3;
	std::string foodMenu[row][col] = {
		{ "01. McDouble",				"\t\t$1.00 + Tax",			"\t|" },
		{ "02. McChicken",				"\t\t$1.00 + Tax",			"\t|" },
		{ "03. Parfait",				"\t\t$1.00 + Tax",			"\t|" },
		{ "04. Side Salad",				"\t\t$1.00 + Tax",			"\t|" },
		{ "05. Small Fries",			"\t\t$1.00 + Tax",			"\t|" },
		{ "06. Small Soft Drink",		"\t$1.00 + Tax",			"\t|" },
		{ "07. 2 Pies",					"\t\t$1.00 + Tax",			"\t|" },
		{ "08. Sundae",					"\t\t$1.00 + Tax",			"\t|" },
		{ "09. Apple Dippers",			"\t$1.00 + Tax",			"\t|" },
		{ "10. 3 Cookies",				"\t\t$1.00 + Tax",			"\t|" }
	};

	// Printing the menu
	system("cls"); // Clears console
	std::cout << "McDonalds Menu: " << std::endl;
	std::cout << "=========================================================" << std::endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << foodMenu[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << "=========================================================" << std::endl;

	// Ask what they want from the menu
	std::cout << "Welcome to McDonalds, what would you like to order? ";
	std::cout << "Enter your choice: ";
}

int getUserInput() {
	int orderNumber;
	std::cin >> orderNumber;

	return orderNumber;
}

void orderProcessing(int input) {
	
	switch (input) {
	case 1:
		std::cout << "You ordered a McDouble." << std::endl;
		std::cout << "Balance Due: $1.00 + Tax" << std::endl;
		break;
	case 2:
		std::cout << "You ordered a McChicken." << std::endl;
		std::cout << "Balance Due: $1.00 + Tax" << std::endl;
		break;
	case 3:
		std::cout << "You ordered a Parfait." << std::endl;
		std::cout << "Balance Due: $1.00 + Tax" << std::endl;
		break;
	case 4:
		std::cout << "You ordered a Side Salad." << std::endl;
		std::cout << "Balance Due: $1.00 + Tax" << std::endl;
		break;
	case 5:
		std::cout << "You ordered a Small Fries." << std::endl;
		std::cout << "Balance Due: $1.00 + Tax" << std::endl;
		break;
	case 6:
		std::cout << "You ordered a Small Soft Drink." << std::endl;
		std::cout << "Balance Due: $1.00 + Tax" << std::endl;
		break;
	case 7:
		std::cout << "You ordered a 2 Pies." << std::endl;
		std::cout << "Balance Due: $1.00 + Tax" << std::endl;
		break;
	case 8:
		std::cout << "You ordered a Sundae." << std::endl;
		std::cout << "Balance Due: $1.00 + Tax" << std::endl;
		break;
	case 9:
		std::cout << "You ordered a Apple Dippers." << std::endl;
		std::cout << "Balance Due: $1.00 + Tax" << std::endl;
		break;
	case 10:
		std::cout << "You ordered a 3 Cookies." << std::endl;
		std::cout << "Balance Due: $1.00 + Tax" << std::endl;
		break;
	default:
		std::cout << "Invalid order..." << std::endl;
		//showMenu();
		break;
	}
}

int main() {
	
	showMenu(); // Prints the menu

	int input = getUserInput(); // Assigns the value that is returned from 'getUserInput()' to 'input'
	orderProcessing(input); // Uses said 'input' to choose your order

	std::cout << "\nThank you for choosing McDonalds, have a nice day!" << std::endl;
	std::cin.get();
	std::cin.get();
	return 0;
}