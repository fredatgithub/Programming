#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	/*
		== equality
		!= not equal
		< less than
		<= less than or equal to
		> greater than
		>= greater than or equal to
	*/

	int value1 = 99;
	int value2 = 64;


	if (value1 >= value2) {
		cout << "Condition 1: true" << endl;
	}
	else {
		cout << "Condition 1: false" << endl;
	}


	//"and"
	//Both conditions must be true
	if (value1 == 99 && value2 >= 64) {
		cout << "Condition 2: true" << endl;
	}
	else {
		cout << "Condition 2: false" << endl;
	}

	//"or"
	 //Either condition will make it true
	if (value1 == 99 || value2 >= 64) {
		cout << "Condition 3: true" << endl;
	}
	else {
		cout << "Condition 3: false" << endl;
	}

	bool condition4 = (value1 != 8) && (value1 = 99);
	bool condition5 = (value2) > 10;

	if ((condition4) && (condition5) == true) {
		cout << "Condition 6: true";
	}
	else {
		cout << "Condition 6: false";
	}

	cin.get();
	return 0;
}