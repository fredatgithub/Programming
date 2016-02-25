#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision; //Shows more decimal values for the floats

int main() {
	
	float value1;
	
	cout << "Enter a value: ";
	cin >> value1;

	float value2 = 404;
	if (value1 == value2) {
		cout << setprecision(10) << value1 <<" is equal to value2..." << endl;
		cin.get();
	}
	else if (value1 > value2) {
		cout << setprecision(10) << value1 << " is greater than value2..." << endl;
		cin.get();
	}
	else if (value1 < value2) {
		cout << setprecision(10) << value1 << " is less than value2..." << endl;
		cin.get();
	}

	cin.get();
	return 0;
}