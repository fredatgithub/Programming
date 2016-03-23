#include <iostream>
#include "../include/Employee.h"
int main() {
	Employee newGuy1;
	newGuy1.getEmployeeData();

	Employee newGuy2("Erin FitzGerald");
	newGuy2.getEmployeeData();

	system("pause");
	return 0;
}