#include <iostream>
#include <string>
#include "House.h"

int main()
{
	House *pHouse = new House[3];
	
	pHouse[0].setRoomAmount(3);
	pHouse[0].setWindowAmount(4);
	pHouse[0].setStoryAmount(1);
	pHouse[0].setHouseColor(6);
	pHouse[0].getInfo();

	pHouse[1].setRoomAmount(8);
	pHouse[1].setWindowAmount(18);
	pHouse[1].setStoryAmount(3);
	pHouse[1].setHouseColor(4);
	pHouse[1].getInfo();

	pHouse[2].setRoomAmount(5);
	pHouse[2].setWindowAmount(10);
	pHouse[2].setStoryAmount(2);
	pHouse[2].setHouseColor(3);
	pHouse[2].getInfo();

	delete [] pHouse;

	system("pause");
	return 0;
}