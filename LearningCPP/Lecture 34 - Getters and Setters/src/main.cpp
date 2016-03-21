#include <iostream>
#include <ctime>
#include "../include/player.h"

int main() {
	Player newPlayer;
	newPlayer.setName();
	std::cout << "Health - " << newPlayer.getHealth() << std::endl;
	std::cout << "Armor - " << newPlayer.getArmour() << std::endl;
	std::cout << "Score - " << newPlayer.getScore() << std::endl;


	// Doing random damage
	std::srand(std::time(0));
	int x = std::rand() % 100 + 1;
	int h = newPlayer.getHealth();

	newPlayer.setHealth(h - x);
	std::cout << newPlayer.getHealth() << std::endl;
	system("pause");
	return 0;
}