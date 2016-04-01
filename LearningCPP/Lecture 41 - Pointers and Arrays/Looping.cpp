#include <iostream>
#include "Looping.h"

Looping::Looping()
{
	limit = sizeof(this->favoriteGames) / sizeof(std::string);
}

void Looping::loop1()
{
	std::string* pTexts = this->favoriteGames; // The pointer is assigned to the array

	for (int i = 0; i < this->limit; i++)
	{
		std::cout << i << ". " << pTexts[i] << std::endl;
	}

	std::cout << std::endl;
}

void Looping::loop2()
{
	std::string* pTexts = this->favoriteGames; // The pointer is assigned to the array

	for (int i = 0; i < this->limit; i++, pTexts++)
	{
		std::cout << i << ". " << *pTexts << std::endl;
	}

	std::cout << std::endl;
}
