#include <iostream>

double addition() {
	double x, y, answer;
	
	std::cout << "Enter x: ";
	std::cin >> x;

	std::cout << "Enter y: ";
	std::cin >> y;

	answer = x + y;

	std::cout << x << " + " << y << " = " <<  answer;
	return answer;
}

double subtraction() {
	double x, y, answer;

	std::cout << "Enter x: ";
	std::cin >> x;

	std::cout << "Enter y: ";
	std::cin >> y;

	answer = x - y;

	std::cout << x << " - " << y << " = " << answer;
	return answer;
}

double multiplication() {
	double x, y, answer;

	std::cout << "Enter x: ";
	std::cin >> x;

	std::cout << "Enter y: ";
	std::cin >> y;

	answer = x * y;

	std::cout << x << " * " << y << " = " << answer;
	return answer;
}

double division() {
	double x, y, answer;

	std::cout << "Enter x: ";
	std::cin >> x;

	std::cout << "Enter y: ";
	std::cin >> y;

	answer = x / y;

	std::cout << x << " / " << y << " = " << answer;
	return answer;
}

int userChoice() {
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1:
		addition();
		break;

	case 2:
		subtraction();
		break;
	case 3:
		multiplication();
		break;

	case 4:
		division();
		break;

	default:
		std::cout << "\n\nUnrecognized Choice." << std::endl;
		std::cout << "Try again: ";
		userChoice();
		break;
	}

	return choice;
}

void showMenu() {
	system("cls"); // Clears window when this function is called

	std::cout << "1. Addition" << std::endl;
	std::cout << "2. Subtraction" << std::endl;
	std::cout << "3. Multiplication" << std::endl;
	std::cout << "4. Division" << std::endl;

	std::cout << "\n\nEnter your choice: ";
	userChoice();
	std::cout << std::endl;
	
	std::cin.get();
	std::cin.get();

	showMenu(); // Restarts the program
}

int main() {
	showMenu();

	std::cin.get();
	return 0;
}