#include "../include/horse.h"
#include <iostream>

Horse::Horse() {
	// Runs when the horse is created
	std::cout << "What is your horses name? ";
	std::getline(std::cin, Horse::name);

	std::cout << "What breed is " << Horse::name << "? ";
	std::getline(std::cin, Horse::breed);

	std::cout << "How old is " << Horse::name << "? ";
	std::cin >> Horse::age;

	std::cout << "How much does " << Horse::name << " weigh? ";
	std::cin >> Horse::weight;
}

Horse::~Horse() {
	std::cout << "Horse Destroyed.." << std::endl;
}

void Horse::showHorseInfo() {
	std::cout << "\n\n------------------------------------------------" << std::endl;
	std::cout << "Name: " << Horse::name << std::endl;
	std::cout << "Breed: " << Horse::breed << std::endl;
	std::cout << "Age: " << Horse::age << std::endl;
	std::cout << "Weight: " << Horse::weight << std::endl;
	std::cout << "------------------------------------------------" << std::endl;

	std::cout << "Would you like this printed to an ID Card? (yes/no) ";
	const std::string choice1 = "yes";
	const std::string choice2 = "no";

	std::string userChoice;
	std::cin >> userChoice;

	if (userChoice == choice1) {
		horseInfo.open("ID.txt");
		horseInfo << "------------------------------------------------" << std::endl;
		horseInfo << "Name: " << Horse::name << std::endl;
		horseInfo << "Breed: " << Horse::breed << std::endl;
		horseInfo << "Age: " << Horse::age << std::endl;
		horseInfo << "Weight: " << Horse::weight << std::endl;
		horseInfo << "------------------------------------------------" << std::endl;
		horseInfo.close();

		std::cout << "Thank you for visiting. " << std::endl;
	}
	else {
		std::cout << "Thank you for visiting. " << std::endl;
	}
}
