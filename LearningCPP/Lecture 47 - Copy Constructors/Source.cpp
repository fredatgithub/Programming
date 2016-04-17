#include <iostream>
#include "Child.h"

int main()
{
	Child child;
	child.setName("Erin");
	child.setAge(15);
	child.setSex(2);
	child.getInfo();

	Child clone1 = child;
	clone1.setName("Caleb");
	clone1.setAge(15);
	clone1.setSex(1);
	clone1.getInfo();

	Child clone2 = clone1;
	clone2.setName("Barbara");
	clone2.setAge(16);
	clone2.setSex(2);
	clone2.getInfo();

	system("pause");
	return 0;
}