#pragma once
#ifndef BRAINWASHER_H_
#define BRAINWASHER_H_

#include <string>

class Brainwasher
{
private:
	std::string name;
	int age;
	int weight;

public:
	Brainwasher();

	// Setters
	void setName(std::string &name);
	void setAge(int &age);
	void setWeight(int &weight);

	// Getters
	void getName();
	void getAge();
	void getWeight();
};
#endif // !BRAINWASHER_H_



