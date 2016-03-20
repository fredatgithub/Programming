#include <iostream>
#include "../include/horse.h"

int main() {
	std::cout << "Starting the program...." << std::endl;

	Horse horse;
	horse.showHorseInfo();


	std::cout << "Ending the program...." << std::endl;

	system("pause");
	return 0;
}