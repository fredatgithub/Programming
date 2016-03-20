#pragma once
#ifndef DOG_H_
#define DOG_H_

#include <string>
#include <fstream>

class Dog {
public:
	void getInfo();
	void showInfo();

private: 
	// This cant be changed by users	
	std::ofstream dogInfo;
	bool happy;
	int age;
	double weight; // LBS
	std::string name;
	
};

#endif // !DOG_H_




