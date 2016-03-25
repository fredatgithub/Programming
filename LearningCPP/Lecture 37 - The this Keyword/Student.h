#pragma once
#ifndef STUDENT_H_
#define STUDENT_H_

#include <sstream>

class Student
{
private:
	std::string name;
	double grade;

public:
	Student();
	Student(std::string name, double grade);
	
	std::string toString();
};


#endif // !STUDENT_H_




