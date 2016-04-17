#pragma once
#ifndef CORGI_H_
#define CORGI_H_

#include <string>

class Corgi
{
private:
	std::string name;
	
	int assignColor;
	std::string color;

	int assignSex;
	std::string sex;

public:
	Corgi();
	~Corgi();

	Corgi(const Corgi& dog);

	void setName(std::string name);
	void setColor(int color);
	void setSex(int assignSex);
	void getInfo() const;
};
#endif // !CORGI_H_

