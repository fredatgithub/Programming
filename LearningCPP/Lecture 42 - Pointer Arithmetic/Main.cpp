#include <iostream>
#include <string>

int main()
{
	const int ELEMENTS = 7;
	std::string texts[ELEMENTS] =
	{
		"zero",
		"one", 
		"two", 
		"three", 
		"four", 
		"five", 
		"six"
	};


	// Making a for loop to print out all of the values
	std::cout << "===================================================================" << std::endl;
	std::string *pTexts = texts;
	const int limit = sizeof(texts) / sizeof(std::string);

	for (int i = 0; i < limit; i++, pTexts++)
	{
		std::cout << i << ". " << *pTexts << std::endl; // Dereference the pointer to show the actual value instead of the adress
	}
	std::cout << "===================================================================" << std::endl;

	/*
	std::cout << "===================================================================" << std::endl;
	std::cout << "Memory Location: " << pTexts << "\tValue: " << *pTexts << std::endl; // This prints out the first string in the array

	pTexts += 1; // This will make pTexts go to the next string in the array (one)
	std::cout << "Memory Location: " << pTexts << "\tValue: " <<*pTexts << std::endl;

	pTexts += 2; // This will make pTexts go up two strings in the array (three)
	std::cout << "Memory Location: " << pTexts << "\tValue: " << *pTexts << std::endl;

	pTexts += 3; // This will make pTexts go up three strings in the array (six)
	std::cout << "Memory Location: " << pTexts << "\tValue: " << *pTexts << std::endl;
	
	pTexts -= 4; // This will go down 4 strings (two)
	std::cout << "Memory Location: " << pTexts << "\tValue: " << *pTexts << std::endl;

	pTexts += 2; // This will go back up two strings (four)
	std::cout << "Memory Location: " << pTexts << "\tValue: " << *pTexts << std::endl;
	std::cout << "===================================================================" << std::endl;
	*/
	system("pause");
	return 0;
}