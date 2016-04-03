#include <iostream>
#include "Looping.h"

Looping::Looping()
{
	this->limit = sizeof(this->favoriteGames) / sizeof(std::string);
}

void Looping::loop1()
{
	std::string *pTexts = this->favoriteGames; // The pointer is assigned to the array

	for (int i = 0; i < this->limit; i++)
	{
		std::cout << i << ". " << pTexts[i] << std::endl;
	}

	std::cout << std::endl;
}

void Looping::loop2()
{
	std::string *pTexts = this->favoriteGames; // The pointer is assigned to the array

	for (int i = 0; i < this->limit; i++, pTexts++)
	{
		std::cout << i << ". " << *pTexts << std::endl; // Dereference the pointer to show the actual value instead of the adress
	}

	std::cout << std::endl;
}
