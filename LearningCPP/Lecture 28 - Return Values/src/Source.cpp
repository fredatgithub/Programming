#include <iostream>
/*
	M=((x1 + x2)/2, (y1 + y2)/2)
*/

double midpointX() {
	double xCoord1, xCoord2, midpointX;

	std::cout << "Enter xCoord1: ";
	std::cin >> xCoord1;

	std::cout << "Enter xCoord2: ";
	std::cin >> xCoord2;

	midpointX = (xCoord1 + xCoord2) / 2;
	
	return midpointX;
}

double midpointY() {
	double yCoord1, yCoord2, midpointY;

	std::cout << "Enter yCoord1: ";
	std::cin >> yCoord1;

	std::cout << "Enter yCoord2: ";
	std::cin >> yCoord2;

	midpointY = (yCoord1 + yCoord2) / 2;

	return midpointY;
}

int main() {
	double X = midpointX();
	double Y = midpointY();

	std::cout << "Midpoint: ";
	std::cout << "(" << X << " , " << Y << ")" << std::endl;

	std::cin.get();
	std::cin.get();
	return 0;
}