#pragma once
#ifndef PERSON_H_
#define PERSON_H_

#include <sstream>

class Person {
private:
	double ammo;
	double armour;
	double health;
	double mana;

	std::string name;
	std::stringstream personStats;
	
public:
	Person();
	~Person();

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

#endif // !PERSON_H_