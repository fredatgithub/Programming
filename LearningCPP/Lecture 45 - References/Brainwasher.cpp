#include <iostream>
#include "Brainwasher.h"



Brainwasher::Brainwasher()
{
	Brainwasher::setName(name);
	Brainwasher::setAge(age);
	Brainwasher::setWeight(weight);

	std::cout << "\n\n======================================\n\n";

	Brainwasher::getName();
	Brainwasher::getAge();
	Brainwasher::getWeight();
}

// Setters
void Brainwasher::setName(std::string &name)
{
	std::cout << "What is your name? ";
	std::getline(std::cin, this->name);
}

void Brainwasher::setAge(int &age)
{
	std::cout << "What is your age? ";
	std::cin >> this->age;
}

void Brainwasher::setWeight(int &weight)
{
	std::cout << "How much do you weight? ";
	std::cin >> this->weight;
}

// Getters
void Brainwasher::getName()
{
	std::cout << "No. Your name is not " << this->name;

	// Using a reference variable to change the name
	std::string &name = this->name;
	name = "Subject 2";

	std::cout << " Your name is, " << this->name << std::endl;

}

void Brainwasher::getAge()
{
	std::cout << "No. Your age is not " << this->age;
	
	// Using a reference variable to change the name
	int &age = this->age;
	age = 16;

	std::cout << " Your age is, " << this->age << std::endl;

}

void Brainwasher::getWeight()
{
	std::cout << "No. Your weight is not " << this->weight;

	// Using a reference variable to change the name
	int &weight = this->weight;
	weight = 231;

	std::cout << " Your weight is, " << this->weight << std::endl;

}