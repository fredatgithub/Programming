#include <iostream>
#include "Student.h"

int main() {
	Student student1;
	std::cout << student1.toString() << std::endl;

	Student student2("Erin FitzGerald", 100.00);
	std::cout << student2.toString() << std::endl;

	Student student3("Simon Lane", 68.33);
	std::cout << student3.toString() << std::endl;

	system("pause");
	return 0;
}