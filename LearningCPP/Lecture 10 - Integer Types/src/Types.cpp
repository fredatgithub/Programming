#include <iostream>
#include <limits.h>

//So that we dont have to put 'std::'
using std::cout;
using std::cin;
using std::endl;

int main() {
		
		cout << "char: ";
		cout << "\n\tMaximum: " << CHAR_MAX;
		cout << "\n\tMinimum: " << CHAR_MIN;
		cout << "\n\tBytes: " << sizeof(char);
		cout << endl;

		cout << "short: ";
		cout << "\n\tMaximum: " << SHRT_MAX; 
		cout << "\n\tMinimum: " << SHRT_MIN;
		cout << "\n\tBytes: " << sizeof(short);
		cout << endl;

		cout << "int: ";
		cout << "\n\tMaximum: " << INT_MAX;
		cout << "\n\tMinimum: " << INT_MIN;
		cout << "\n\tBytes: " << sizeof(int);
		cout << endl;

		cout << "long: ";
		cout << "\n\tMaximum: " << LONG_MAX;
		cout << "\n\tMinimum: " << LONG_MIN;
		cout << "\n\tBytes: " << sizeof(long);
		cout << endl;

	cin.get();
	return 0;
}