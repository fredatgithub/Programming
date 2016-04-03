#include <iostream>
#include "PointerArith.h"



PointerArith::PointerArith()
{
}

// Making a for loop to print out all of the values
void PointerArith::showValues()
{
	std::cout << "===================================================================" << std::endl;
	for (int i = 0; i < this->limit; i++, pTexts++)
	{
		// Shows the Memory Adress of the texts and then the actual value of the Memory in that location
		std::cout << "Memory Location: " << &this->pTexts << "\tValue: " << *this->pTexts << std::endl; 
	}
	std::cout << "===================================================================" << std::endl;
}



//
void PointerArith::pointerArith()
{
	std::cout << "===================================================================" << std::endl;
	std::cout << "Memory Location: " << pTexts << "\tValue: " << *pTexts << std::endl; // This prints out the first string in the array

	pTexts += 1; // This will make pTexts go to the next string in the array (one)
	std::cout << "Memory Location: " << pTexts << "\tValue: " << *pTexts << std::endl;

	pTexts += 2; // This will make pTexts go up two strings in the array (three)
	std::cout << "Memory Location: " << pTexts << "\tValue: " << *pTexts << std::endl;

	pTexts += 3; // This will make pTexts go up three strings in the array (six)
	std::cout << "Memory Location: " << pTexts << "\tValue: " << *pTexts << std::endl;

	pTexts -= 4; // This will go down 4 strings (two)
	std::cout << "Memory Location: " << pTexts << "\tValue: " << *pTexts << std::endl;

	pTexts += 2; // This will go back up two strings (four)
	std::cout << "Memory Location: " << pTexts << "\tValue: " << *pTexts << std::endl;
	std::cout << "===================================================================" << std::endl;
}

void PointerArith::userChoice()
{
	std::cout << "1. Show the full array \n2. Show Pointer Arithmetic" << std::endl;
	std::cout << "\nWhich would you like to see? ";

	int choice;
	std::cin >> choice;
	
	switch (choice)
	{
	case 1:
		this->showValues();
		break;
	
	case 2:
		this->pointerArith();
		break;
	
	default:
		std::cout << "\nInvalid choice, please try again" << std::endl;
		this->userChoice();
		break;
	}
}
