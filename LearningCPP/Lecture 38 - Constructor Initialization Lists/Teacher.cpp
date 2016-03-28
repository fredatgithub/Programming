#include <iostream>
#include <sstream>
#include "Teacher.h"

// This is the same way as using "this" but it looks sloppier
Teacher::Teacher(std::string name, std::string subject, int grade, int age): name(name), subject(subject), grade(grade), age(age)
{
	/*
	this->name = name;
	this->subject = subject;
	this->grade = grade;
	this->age = age;
	*/
}

std::string Teacher::toString()
{
	std::stringstream ss;

	ss << "Teacher Name: \t\t" << Teacher::name << std::endl;
	ss << "Teacher Subject: \t" << Teacher::subject << std::endl;
	ss << "Teacher Grade: \t\t" << Teacher::grade << std::endl;
	ss << "Teacher Age: \t\t" << Teacher::age << std::endl;
	ss << std::endl;

	return ss.str();
}
