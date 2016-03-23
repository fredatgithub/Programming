#include <iostream>
#include "../include/Employee.h"

Employee::Employee() {
	Employee::setEmployeeData(Employee::getName(), 32, 65);
}

Employee::Employee(std::string newName) {
	Employee::name = newName;
	Employee::setAge(21);
	Employee::setWage(87);
}


// Setters
//------------------------------------//
void Employee::setEmployeeData(std::string name, int age, double wage) {
	Employee::setName();
	Employee::setAge(age);
	Employee::setWage(wage);

	 
}

//------------------------------------//
void Employee::setName() {
	std::getline(std::cin, Employee::name);
}

//------------------------------------//
void Employee::setAge(int age) {
	Employee::age = age;
}

//------------------------------------//
void Employee::setWage(double wage) {
	Employee::wage = wage;
}



// Getters
//------------------------------------//
void Employee::getEmployeeData() {
	Employee::employeeData << "Name \t- " << Employee::getName() << std::endl;
	Employee::employeeData << "Age \t- " << Employee::getAge() << std::endl;
	Employee::employeeData << "Wage \t- " << Employee::getWage() << std::endl;
	Employee::employeeData << std::endl;

	std::cout << Employee::employeeData.str();

}

//------------------------------------//
std::string Employee::getName() {
	return Employee::name;
}

//------------------------------------//
int Employee::getAge() {
	return age;
}

//------------------------------------//
double Employee::getWage() {
	return wage;
}


