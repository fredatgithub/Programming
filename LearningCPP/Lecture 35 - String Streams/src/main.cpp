#include <iostream>
#include "../include/Enemy.h"


int main() {
	Enemy newEnemy;
	newEnemy.setStats(60, 65, 80, 30);
	newEnemy.getStats();

	system("pause");
	return 0;
}