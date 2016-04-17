#include <iostream>
#include "Goat.h"

Goat::Goat()
{
	std::cout << "Goat object created.\n" << std::endl;
}

Goat::~Goat()
{
	std::cout << "\nGoat object deleted." << std::endl;
}

void Goat::setName(std::string name)
{
	this->name = name;
}

void Goat::setHeight(double height)
{
	this->height = height;
}

void Goat::setWeight(double weight)
{
	this->weight = weight;
}

void Goat::setHornSize(double hornSize)
{
	this->hornSize = hornSize;
}

void Goat::getInfo() const
{
	std::cout << "Name:\t\t" << this->name << std::endl;
	std::cout << "Height:\t\t" << this->height << " inches" << std::endl;
	std::cout << "Weight:\t\t" << this->weight << " pounds" << std::endl;
	std::cout << "Horn Size:\t" << this->hornSize << " inches" << std::endl;
}