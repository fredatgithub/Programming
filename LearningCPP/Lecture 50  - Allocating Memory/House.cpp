#include <iostream>
#include "House.h"

House::House()
{	
}

House::~House()
{
}

void House::setRoomAmount(int rooms)
{
	this->rooms = rooms;
}

void House::setWindowAmount(int windows)
{
	this->windows = windows;
}

void House::setStoryAmount(int stories)
{
	this->stories = stories;
}

void House::setHouseColor(int colorChoice)
{
	switch (colorChoice)
	{
	case 1: this->color = "Red"; break;
	case 2: this->color = "Blue"; break;
	case 3: this->color = "Purple"; break;
	case 4: this->color = "Yellow"; break;
	case 5: this->color = "Pink"; break;

	default: this->color = "Other"; break;
	}
}

void House::getInfo()
{
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "Amount of rooms: " << this->rooms << std::endl;
	std::cout << "Amount of windows: " << this->windows << std::endl;
	std::cout << "Amount of stories: " << this->stories << std::endl;
	std::cout << "House color: " << this->color << std::endl;
	std::cout << "--------------------------------------" << std::endl;

}
