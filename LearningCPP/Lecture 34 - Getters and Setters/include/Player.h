#pragma once
#ifndef PLAYER_H_
#define PLAYER_H_

#include <string>

class Player
{
private:
	std::string name;
	int health;
	int score;
	int armor;

public:
	Player();
	~Player();
	
	// Setters
	void setName();
	void setArmor(int a);
	void setHealth(int h);
	void setScore(int s);

	// Getters
	std::string getName();
	int getArmour();
	int getHealth();
	int getScore();
	
};

#endif // !PLAYER_H_