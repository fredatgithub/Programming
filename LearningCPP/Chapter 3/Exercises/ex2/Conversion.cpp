#include <iostream>

double convert_to_kilometers(double miles) {
	// There are 1.60934 kilometers to a mile
	double kilometers = miles * 1.60934;
	return kilometers;
}

int main(int argc, char const *argv[]) {
	
	std::cout << "Please input miles to convert: ";
	double miles = 0.0; // Miles
	std::cin >> miles;

	std::cout << "Converting....\n";
	double kilometers = convert_to_kilometers(miles);

	std::cout << "Kilometers: " << kilometers << "\n";

	std::cin.get();
	std::cin.get();
	return 0;
}