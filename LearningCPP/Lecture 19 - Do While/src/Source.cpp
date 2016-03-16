#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	const string password = "hello";
	int chances = 3;
	string input;

	do {
		cout << "Enter your password: ";
		cin >> input;
		
		if (input != password) {
			chances--; //If you enter the wrong password then remove a chance
			cout << "Incorrect password. ";
			cout << "Chances left: " << chances << endl;
			cin.get();
		}
		else if (input == password) {
			cout << "Welcome!";
			cin.get();
		}
	} while (input != password && chances > 0); //If your chances haven't ran out then ask for the password again
	
	if (chances == 0) {
		cout << "\n\nNo more chances... Exiting" << endl; 
		cin.get();
	}

	cin.get();
	return 0;
}