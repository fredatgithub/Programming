#include <iostream>
#include "../include/Person.h"

Person::Person() {
	Person::setName();
	Person::setStats(100, 100, 100, 100);
}

Person::~Person() {
}


// Setters
//------------------------------------//
void Person::setName() {
	std::cout << "What is your name? ";
	std::getline(std::cin, Person::name);
}

//------------------------------------//
void Person::setAmmo(double ammo) {
	Person::ammo = ammo;
}

//------------------------------------//
void Person::setArmour(double armour) {
	Person::armour = armour;
}

//------------------------------------//
void Person::setHealth(double health) {
	Person::health = health;
}
//------------------------------------//
void Person::setMana(double mana) {
	Person::mana = mana;
}

//------------------------------------//
void Person::setStats(double ammo, double armour, double health, double mana) {
	Person::setAmmo(ammo);
	Person::setArmour(armour);
	Person::setHealth(health);
	Person::setMana(mana);
}


// Getters
//------------------------------------//
std::string Person::getName() {
	return Person::name;
}

//------------------------------------//
double Person::getAmmo() {
	return ammo;
}

//------------------------------------//
double Person::getArmour() {
	return armour;
}

//------------------------------------//
double Person::getHealth() {
	return health;
}

//------------------------------------//
double Person::getMana() {
	return mana;
}

//------------------------------------//
void Person::getStats() {
	Person::personStats << "Person Name: " << Person::getName() << std::endl;
	Person::personStats << "Person Ammo \t- " << Person::getAmmo() << std::endl;
	Person::personStats << "Person Armour \t- " << Person::getArmour() << std::endl;
	Person::personStats << "Person Health \t- " << Person::getHealth() << std::endl;
	Person::personStats << "Person Mana \t- " << Person::getMana() << std::endl;
	Person::personStats << std::endl;

	std::cout << Person::personStats.str();
}