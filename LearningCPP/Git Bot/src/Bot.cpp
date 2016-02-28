//This program requires that all you do is have http://git-scm.com/ installed and install with "Use from the Windows Command Prompt"

#include <iostream>

using std::cin;
using std::cout;

int main() {	
	//Git Stuff
	system("git add -A");
	system("git commit -a");
	system("git push");
	
	cout << "Thank you for using the bot :D";
	cin.get();
	return 0;
}