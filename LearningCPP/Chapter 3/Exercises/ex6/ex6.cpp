#include <iostream>

void order(double a, double b, double c) {

	if(a > b && a > c) {
		if (b > c) {
			std::cout << a << ", " << b << ", " << c << "\n";
		}

		if (b < c) {
			std::cout << a << ", " << c << ", " << b << "\n";
		}
	}

	if(b > a && b > c) {
		if (a > c) {
			std::cout << b << ", " << a << ", " << c << "\n";
		}

		if (a < c) {
			std::cout << b << ", " << c << ", " << a << "\n";
		}
	}

	if(c > a && c > b) {
		if (a > b) {
			std::cout << c << ", " << a << ", " << b << "\n";
		}

		if (a < b) {
			std::cout << c << ", " << b << ", " << a << "\n";
		}
	}
}

int main(int argc, char const *argv[]) {
	std::cout << "Please give me three numbers to sort: ";
	double a, b, c;
	std::cin >> a >> b >> c;

	order(a, b, c);

	std::cin.get();
	std::cin.get();
	return 0;
}