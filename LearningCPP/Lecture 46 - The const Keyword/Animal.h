#pragma once
#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>

class Animal
{
private:
	std::string name;


public:
	Animal();
	void setName(std::string name);
	void getInfo() const;
};

#endif // !ANIMAL_H_




