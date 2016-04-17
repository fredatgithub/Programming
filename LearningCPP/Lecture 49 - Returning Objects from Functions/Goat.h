#pragma once
#ifndef GOAT_H_
#define GOAT_H_

#include <string>

class Goat
{
private:
	std::string name;

	double height;
	double weight;
	double hornSize;

public:
	Goat();
	~Goat();

	void setName(std::string name);
	void setHeight(double height);
	void setWeight(double weight);
	void setHornSize(double hornSize);
	void getInfo() const;

};
#endif // !GOAT_H_