#include <iostream>
#include "Goat.h"

Goat *createGoat(std::string name, double height, double weight, double hornSize)
{
	// Use the functions from the goat class to return the values from this function
	Goat *pGoat = new Goat();
	pGoat->setName(name);
	pGoat->setHeight(height);
	pGoat->setWeight(weight);
	pGoat->setHornSize(hornSize);

	return pGoat; // Returns the pointer
}

int main()
{
	// Create an object of the goat, but making a copy of the goat created with a pointer
	Goat *pGoat = createGoat("Bobby", 3.7, 69.6, 3.2);
	pGoat->getInfo();
	delete pGoat; // Delete the memory that was used to make this

	system("pause");
	return 0;
}