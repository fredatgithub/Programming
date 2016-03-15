#include <iostream>
#include <string>

int main() {
	/* BREAK
	for (int i = 0; i < 5; i++) {
		std::cout << "i is: " << i << std::endl;

		if (i == 3) {
			std::cout << "Program Quitting..." << std::endl;
			break; // Immediatly jumps out of this loop
		}

		std::cout << "Looping..." << std::endl;
	}
	*/

	/* Continue
	for (int i = 0; i < 5; i++) {
		std::cout << "i is: " << i << std::endl;

		std::cout << "Looping...(1)" << std::endl;

		if (i == 3) {
			continue; // Doesn't do the lines after this
		}

		std::cout << "Looping...(2)" << std::endl;
	}
	*/

	const std::string password = "hello";
	int chances = 3;
	std::string input;

	do {
		std::cout << "Enter your password: ";
		std::cin >> input;

		if (input != password) {
			chances--; // If you enter the wrong password then remove a chance
			std::cout << "Incorrect password. ";
			std::cout << "Chances left: " << chances << std::endl;
			std::cin.get();
		}
		else if (input == password) {
			std::cout << "Welcome!" << std::endl;
			break; // If you get the password right then you leave the loop
		}
	} while (true && chances > 0); //If your chances haven't ran out then ask for the password again
	
	if (chances < 1) {
		std::cout << "\n\nNo more chances... Exiting" << std::endl;
	}
	
	std::cin.get();
	return 0;
}