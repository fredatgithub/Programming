#include <iostream>
#include "../include/dog.h"

void Dog::getInfo() {
	std::cout << "What is your dogs name? ";
	std::cin >> Dog::name;

	std::cout << "How old is " << Dog::name << "? ";
	std::cin >> Dog::age;
	
	std::cout << "How much does " << Dog::name << " weigh? ";
	std::cin >> Dog::weight;
	
	std::cout << "Is " << Dog::name << " happy? (yes[1]/no[0]) ";
	std::cin >> Dog::happy;
}

void Dog::showInfo() {
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "Name: " << Dog::name << std::endl;
	std::cout << "Age: " << Dog::age << std::endl;
	std::cout << "Weight: " << Dog::weight << std::endl;
	std::cout << "Mood: " << Dog::happy << std::endl;
	std::cout << "------------------------------------------------" << std::endl;

	std::cout << "Would you like this printed to an ID Card? (yes/no) ";
	const std::string choice1 = "yes";
	const std::string choice2 = "no";

	std::string userChoice;
	std::cin >> userChoice;

	if (userChoice == choice1) {
		dogInfo.open("ID.txt");
		dogInfo << "------------------------------------------------" << std::endl;
		dogInfo << "Name: " << Dog::name << std::endl;
		dogInfo << "Age: " << Dog::age << std::endl;
		dogInfo << "Weight: " << Dog::weight << std::endl;
		dogInfo << "Mood: " << Dog::happy << std::endl;
		dogInfo << "------------------------------------------------" << std::endl;
		dogInfo.close();

		std::cout << "Thank you for visiting. " << std::endl;
	}
	else {
		std::cout << "Thank you for visiting. " << std::endl;
	}
}
