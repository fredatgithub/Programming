#include <iostream>
#include "Corgi.h"

int main()
{
	/*
	Corgi corgi;
	corgi.setName("Buggeh");
	corgi.setColor(1);
	corgi.setSex(2);
	corgi.getInfo();

	Corgi clone1 = corgi;
	clone1.setName("Bear");
	clone1.setColor(2);
	clone1.setSex(1);
	clone1.getInfo();
	*/
	
	Corgi *pCorgi1 = NULL;
	pCorgi1 = new Corgi();
	pCorgi1->setName("Buggeh");
	pCorgi1->setColor(2);
	pCorgi1->setSex(2);
	pCorgi1->getInfo();
	delete pCorgi1;
	

	Corgi *pCorgi2 = NULL;
	pCorgi2 = new Corgi();
	pCorgi2->setName("Bear");
	pCorgi2->setColor(1);
	pCorgi2->setSex(1);
	pCorgi2->getInfo();
	delete pCorgi2;

	system("pause");
	return 0;
}