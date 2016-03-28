#include <iostream>
#include "Teacher.h"

int main()
{
	Teacher teacher("Mrs. FitzGerald", "History", 5, 15);
	std::cout << teacher.toString();

	system("pause");
	return 0;
}