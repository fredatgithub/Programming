#include <iostream>
#include "Corgi.h"

Corgi::Corgi()
{
	std::cout << "New Corgi has entered." << std::endl;
}

Corgi::~Corgi()
{
	std::cout << "Destructor called.\n" << std::endl;
}

Corgi::Corgi(const Corgi& dog)
{
	std::cout << "\nClone of " << dog.name << " was created." << std::endl;
}

void Corgi::setName(std::string name)
{
	this->name = name;
}

void Corgi::setColor(int assignColor)
{
	switch (assignColor)
	{
	case 1: this->color = "Brown"; break;
	case 2: this->color = "Tan"; break;
	default: this->color = "Other"; break;
	}
}

void Corgi::setSex(int assignSex)
{
	switch (assignSex)
	{
	case 1: this->sex = "Male";	break;
	case 2: this->sex = "Female"; break;
	default: break;
	}
}

void Corgi::getInfo() const
{
	std::cout << "Corgi name:\t" << this->name << std::endl;
	std::cout << "Corgi color:\t" << this->color << std::endl;
	std::cout << "Corgi sex:\t" << this->sex << std::endl;
}
