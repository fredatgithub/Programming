#include <iostream>
#include <string> //So we can use strings

//So that we dont have to put 'std::'
using std::string; 
using std::cout;
using std::cin;

int main() {
	
	cout << "About: \n";
	
	string name1 = "Blake Barnes\n";
	string birthday1 = "Jan. 3, 2000\n";
	string job = "Unoccupied\n";
	string desiredJob = "VALVE employee\n";
	cout << "User: " << name1;
	cout << "D.O.B.: " << birthday1;
	cout << "Job: " << job;
	cout << "Desired Job: " << desiredJob;


	cin.get();
	return 0;
}