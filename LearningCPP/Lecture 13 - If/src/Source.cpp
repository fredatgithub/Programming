#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string password = "password";

	cout << "Enter your password: ";


	string input;
	cin >> input;

	if (input == password) {
		cout << "Correct!" << endl;
		cout << "Logging in..." << endl;
		cin.get();
	}
	if (input != password) {
		cout << "Incorrect.." << endl;
		cout << "'" << input << "'" << ", is not the right password." << endl;
		cin.get();
	}

	cin.get();
	return 0;
}