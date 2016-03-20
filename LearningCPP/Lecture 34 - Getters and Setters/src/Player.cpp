#include <iostream>
#include "../include/player.h"



Player::Player() {
	Player::name;
	Player::armor = 100;
	Player::health = 100;
	Player::score = 0;
}


Player::~Player() {
}


// Setters
void Player::setName() {
	std::cout << "What is your name? ";
	std::cin >> Player::name;
}

void Player::setArmor(int a) {
	Player::armor = a;
}

void Player::setHealth(int h) {
	Player::health = h;
}

void Player::setScore(int s) {
	Player::score = s;
}

// Getters
std::string Player::getName() {
	return name;
}

int Player::getArmour() {
	return armor;
}

int Player::getHealth() {
	return health;
}

int Player::getScore() {
	return score;
}
