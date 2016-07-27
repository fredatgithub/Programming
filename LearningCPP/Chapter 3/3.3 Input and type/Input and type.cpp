#include <iostream>
#include <string>

// Convert years to months (you dont have to do this, I am doing it for my own practice)
double convert_age_to_months(double years) {
	double months = years * 12; // Multiply by twelve
	return months;
}

// Read the name and age
int main(int argc, char const *argv[]) {
	std::cout << "What is your name? ";
	std::string first_name = "???";		// string for name	
	std::cin >> first_name;				// Read a string

	std::cout << "Age? ";
	int age = 0;		// integer for age
	std::cin >> age;	// Read an integer
	age = convert_age_to_months((double)age);

	
	std::cout << "Hello, " << first_name << " (age " << age << " months)\n";

	std::cin.get();
	std::cin.get();
	return 0;
}