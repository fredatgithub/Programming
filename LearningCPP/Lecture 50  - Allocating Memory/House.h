#pragma once
#ifndef HOUSE_H_
#define HOUSE_H_

#include <string>

class House
{
private:
	int rooms;
	int windows;
	int stories;

	std::string color;
	int colorChoice;

public:
	House();
	~House();

	void setRoomAmount(int rooms);
	void setWindowAmount(int windows);
	void setStoryAmount(int stories);
	void setHouseColor(int colorChoice);

	void getInfo();

};
#endif // !HOUSE_H_