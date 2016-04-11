#include <iostream>
#include "Animal.h"

Animal::Animal()
{
}

void Animal::setName(std::string name)
{
	this->name = name;
}

void Animal::getInfo() const
{
	std::cout << "This animals name is " << this->name << std::endl;
}

