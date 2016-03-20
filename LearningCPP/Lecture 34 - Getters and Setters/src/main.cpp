#include <iostream>
#include "../include/player.h"

int main() {
	Player person;
	person.setName();
	std::cout << "Health - " << person.getHealth() << std::endl;
	std::cout << "Armor - " << person.getArmour() << std::endl;
	std::cout << "Score - " << person.getScore() << std::endl;

	system("pause");
	return 0;
}