#include <iostream>
#include <string.h>

int main(int argc, char const *argv[]) {
	
	std::cout << "Please enter a name (Then press enter): ";
	std::string first_name; // This is the variable for a string
	std::cin >> first_name; // This is where we get input from the user for the variable
	std::cout << "Hello, " << first_name << std::endl;

	std::cin.get();
	std::cin.get();
	return 0;
}