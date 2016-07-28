#include <iostream>

double sum(int a, int b) {
	return a + b;
}

double difference(int a, int b) {
	return a - b;
}

double product(int a, int b) {
	return a * b;
}

double ratio(int a, int b) {
	return a / b;
}

int main(int argc, char const *argv[]) {
	std::cout << "Please enter two numbers: ";
	double a, b;
	std::cin >> a >> b;

	std::cout << a << " + " << b << " = " << sum(a, b) << "\n";
	std::cout << a << " - " << b << " = " << difference(a, b) << "\n";
	std::cout << a << " * " << b << " = " << product(a, b) << "\n";
	std::cout << a << " / " << b << " = " << ratio(a, b) << "\n";
	
	std::cin.get();
	std::cin.get();
	return 0;
}