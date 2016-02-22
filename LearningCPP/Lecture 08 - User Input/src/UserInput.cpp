#include <iostream>
#include <string> //So we can use strings

//So that we dont have to put 'std::'
using std::string;
using std::cout;
using std::cin;

int main() {
	//Don't declare them here
	string name;
	string month;
	string day;
	string year;

	cout << "What is your name? ";
	cin >> name;

	cout << "What month were you born in? ";
	cin >> month;

	cout << "What day? ";
	cin >> day;

	cout << "What year? ";
	cin >> year;

	cout << "\nAbout you:\n";
	cout << "Name: " << name << "\n";
	cout << "Birthday: " << month << ", " << day << ", " << year << "\n";

	cin.get();
	cin.get();
	return 0;
}