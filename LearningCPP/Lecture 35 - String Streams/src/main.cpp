#include <iostream>
#include "../include/Enemy.h"
#include "../include/Person.h"


int main() {
	Person newPerson;
	newPerson.setStats(70, 50, 98, 65);
	newPerson.getStats();

	Enemy newEnemy;
	newEnemy.setStats(60, 65, 80, 30);
	newEnemy.getStats();

	system("pause");
	return 0;
}