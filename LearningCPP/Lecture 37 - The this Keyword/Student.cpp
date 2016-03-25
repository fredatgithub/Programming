#include <iostream>
#include <sstream>
#include "Student.h"


Student::Student()
{
	// Initializing the name and age
	Student::name = "Blake Barnes";
	Student::grade = 87.56;
}

Student::Student(std::string name, double grade)
{
	// "this" assigns the value to the variable in Student::name or Student::grade
	this->name = name;
	this->grade = grade;
}


// Prints the information to a string
std::string Student::toString()
{
	std::stringstream ss;

	ss << "Student Name \t- " << Student::name << std::endl;;
	ss << "Student Grade \t- " << Student::grade << "%" << std::endl;

	return ss.str();
}
