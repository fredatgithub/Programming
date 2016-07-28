#include <iostream>

double do_math_stuff(double a, char operand, double b) {
	if(operand == '+') {
		return a + b;
	}

	if(operand == '-') {
		return a - b;
	}

	if(operand == '*') {
		return a * b;
	}

	if(operand == '/') {
		return a / b;
	}
}

int main(int argc, char const *argv[]) {
	
	// Keep looping so that it is more like a normal calculator
	while(true) {
		std::cout << "Enter a problem: ";
		double a, b;
		char operand;
		std::cin >> a >> operand >> b;
		std::cout << do_math_stuff(a, operand, b) << "\n\n";
	}

	std::cin.get();
	std::cin.get();
	return 0;
}