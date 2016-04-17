#pragma once
#ifndef CHILD_H_
#define CHILD_H_

#include <string>

class Child
{
	std::string name;
	int age;
	int assignSex;
	std::string sex;

public:
	Child();
	Child(const Child& other);

	void setName(std::string name);
	void setAge(int age);
	void setSex(int sex);
	void getInfo() const;
};
#endif // !CHILD_H_


