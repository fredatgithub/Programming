#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;

int main() {

	float fValue = 1268.6668854;
	double dValue = 1268.6668854;
	long double ldValue = 1268.6668854;

	cout << "Float: ";
	cout << "\n\tBytes: " << sizeof(fValue) << endl;
	cout << "Double: ";
	cout << "\n\tBytes: " << sizeof(dValue) << endl;
	cout << "Long Double: ";
	cout << "\n\tBytes: " << sizeof(ldValue) << endl;

	cout << "\nfValue: " << std::setprecision(20) << std::fixed << fValue;
	cout << "\ndValue: " << std::setprecision(20) << std::fixed << dValue;
	cout << "\nldValue: " << std::setprecision(20) << std::fixed << ldValue;

	cin.get();
	return 0;
}