#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	
	cout << "1.| \tAdd New Record" << endl;
	cout << "2.| \tDelete Record" << endl;
	cout << "3.| \tView Record" << endl;
	cout << "4.| \tSearch Record" << endl;
	cout << "5.| \tQuit" << endl;

	cout << "Enter selection: ";

	int selection;
	cin >> selection;

	if (selection == 1) {
		cout << "Adding New Record." << endl;
		cin.get();
	}
	if (selection == 2) {
		cout << "Deleteing Record." << endl;
		cin.get();
	}
	if (selection == 3) {
		cout << "Record is being viewed." << endl;
		cin.get();
	}
	if (selection == 4) {
		cout << "Searching Record.." << endl;
		cin.get();
	}
	
	//Quiting
	if (selection == 5) {
		cout << "Are you sure you want to quit? ";

		string choice1 = "yes";
		string choice2 = "no";

		string answer;
		cin >> answer;

		if (answer == choice1){
			cout << "Exiting.." << endl;
		} 
		if (answer == choice2) {
			cout << "Yay! You stayed!" << endl;
			cin.get();
		}
	}
	


	cin.get();
	return 0;
}