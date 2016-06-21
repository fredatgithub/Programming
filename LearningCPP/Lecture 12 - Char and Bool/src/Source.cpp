#include <iostream>
#include <limits.h>
using std::cin;
using std::cout;
using std::endl;

int main() {
	cout << "bool: ";
	cout << "\n\tTrue = 1";
	cout << "\n\tFalse = 0";

	cout << "\nchar: ";
	cout << "\n\tchar is used for so called ANSI family of functions (typically function name ends with A), or more commonly known as using ASCII character set.";
	cout << "\n\tMaximum: " << CHAR_MAX;
	cout << "\n\tMinimum: " << CHAR_MIN;
	cout << "\n\tBytes: " << sizeof(char);
	
	cout << "\nwchar_t: ";
	cout << "\n\twchar_t is used for new so called Unicode (or Wide) family of functions (typically function name ends with W), which use UTF-16 character set.";
	cout << "\n\tMaximum: " << WCHAR_MAX;
	cout << "\n\tMinimum: " << WCHAR_MIN;
	cout << "\n\tBytes: " << sizeof(wchar_t);
	cout << endl;
	
	bool bValue = true; //or false
	char cValue1 = '1';
	char cValue2 = 'y';
	wchar_t cValue3 = 'i';

	cout << "bValue: " << bValue << "\tSize: " <<  sizeof(bValue) << endl;
	cout << "cValue1: " << cValue1 << "\tSize: " << sizeof(cValue1) << endl;
	cout << "cValue2: " << cValue2 << "\tSize: " << sizeof(cValue2) << endl;
	cout << "cValue3: " << (char)cValue3 << "\tSize: " << sizeof(cValue3) << endl; //casts to a char so we don't just get '105'

	cin.get();
	return 0;
}