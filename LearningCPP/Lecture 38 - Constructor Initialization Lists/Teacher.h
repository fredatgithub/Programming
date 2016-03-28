#pragma once
#ifndef TEACHER_H_
#define TEACHER_H_

#include <string>

class Teacher
{
private:
	std::string name;
	std::string subject;
	int age;
	int grade;


public:
	Teacher(std::string name, std::string subject, int grade, int age);

	std::string toString();
};



#endif // !TEACHER_H_




