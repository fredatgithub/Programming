#pragma once

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <sstream>

class Employee
{
private:
	std::string name;
	int age;
	double wage;
	std::stringstream employeeData;


public:
	Employee();
	Employee(std::string newName); // This constructor lets you set the name when you initialize the "Employee"

	// Setters
	void setEmployeeData(std::string name, int age, double wage);
	void setName();
	void setAge(int age);
	void setWage(double wage);

	// Getters
	void getEmployeeData();
	std::string getName();
	int getAge();
	double getWage();
};

#endif // !EMPLOYEE_H_

