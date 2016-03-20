#pragma once
#ifndef HORSE_H_
#define HORSE_H_

#include <string>
#include <fstream>

class Horse {
public:
	Horse();
	~Horse();

	void showHorseInfo();

private:
	double height;
	double weight;
	int age;
	std::ofstream horseInfo;
	std::string name;
	std::string breed;
};


#endif // !HORSE_H_