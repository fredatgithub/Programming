#include <iostream>
#include <string>

#include "Looping.h"

int main()
{
	Looping newLoop1;
	newLoop1.loop1(); // looping with just a pointer
	
	Looping newLoop2; // Looping while incrementing with the pointer
	newLoop2.loop2();

	system("pause");
	return 0;
}