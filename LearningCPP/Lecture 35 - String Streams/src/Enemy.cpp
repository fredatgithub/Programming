#include <iostream>
#include "../include/Enemy.h"

Enemy::Enemy() {
	Enemy::setName();
	Enemy::setStats(100, 100, 100, 100);
}

Enemy::~Enemy() {
}


// Setters
//------------------------------------//
void Enemy::setName() {
	Enemy::name = "Orc";
}

//------------------------------------//
void Enemy::setAmmo(double ammo) {
	Enemy::ammo = ammo;
}

//------------------------------------//
void Enemy::setArmour(double armour) {
	Enemy::armour = armour;

	if (armour > 100) {
		Enemy::setArmour(100);
	}
}

//------------------------------------//
void Enemy::setHealth(double health) {
	Enemy::health = health;

	if (health > 100) {
		Enemy::setHealth(100);
	}
}

//------------------------------------//
void Enemy::setMana(double mana) {
	Enemy::mana = mana;

	if (mana > 100) {
		Enemy::setMana(100);
	}
}

//------------------------------------//
void Enemy::setStats(double ammo, double armour, double health, double mana) {
	Enemy::setAmmo(ammo);
	Enemy::setArmour(armour);
	Enemy::setHealth(health);
	Enemy::setMana(mana);
}


// Getters
//------------------------------------//
std::string Enemy::getName(){
	return Enemy::name;
}

//------------------------------------//
double Enemy::getAmmo() {
	return ammo;
}

//------------------------------------//
double Enemy::getArmour() {
	return armour;
}

//------------------------------------//
double Enemy::getHealth() {
	return health;
}

//------------------------------------//
double Enemy::getMana() {
	return mana;
}

//------------------------------------//
void Enemy::getStats(){
	Enemy::enemyStats << "Enemy Name: " << Enemy::getName() << std::endl;
	Enemy::enemyStats << "Enemy Ammo \t- " << Enemy::getAmmo() << std::endl;
	Enemy::enemyStats << "Enemy Armour \t- " << Enemy::getArmour() << std::endl;
	Enemy::enemyStats << "Enemy Health \t- " << Enemy::getHealth() << std::endl;
	Enemy::enemyStats << "Enemy Mana \t- " << Enemy::getMana() << std::endl;
	Enemy::enemyStats << std::endl;

	std::cout << Enemy::enemyStats.str();
}
