#include <iostream>
#include "Child.h"

Child::Child()
{
	std::cout << "Origninal child born." << std::endl;
}

Child::Child(const Child& original) // Original is just a reference to the object we copy
{
	std::cout << "\nClone of " << original.name  << " was born."<< std::endl;
}

void Child::setName(std::string name)
{
	this->name =  name;
}

void Child::setAge(int age)
{ 
	this->age = age;
}

void Child::setSex(int assignSex)
{
	switch (assignSex)
	{
	case 1: this->sex = "male"; break;
	case 2: this->sex = "female"; break;
	default: Child::setSex(assignSex); break;
	}
}

void Child::getInfo() const
{
	std::cout << "Childs name:\t" << this->name << std::endl;
	std::cout << "Childs age:\t" << this->age << std::endl;
	std::cout << "Childs sex:\t" << this->sex << std::endl;
}
