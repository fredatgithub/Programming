#pragma once
#ifndef ENEMY_H_
#define ENEMY_H_

#include <sstream>

class Enemy {
private:
	double ammo;
	double armour;
	double health;
	double mana;

	std::string name;
	std::stringstream enemyStats;

public:
	Enemy();
	~Enemy();

	// Setters
	void setName();
	void setAmmo(double ammo);
	void setArmour(double armour);
	void setHealth(double health);
	void setMana(double mana);
	void setStats(double ammo, double armour, double health, double mana);

	// Getters
	std::string getName();
	double getAmmo();
	double getArmour();
	double getHealth();
	double getMana();
	void getStats();
};

#endif // !ENEMY_H_