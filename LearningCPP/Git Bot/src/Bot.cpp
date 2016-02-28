//This program requires that all you do is have http://git-scm.com/ installed and install with "Use from the Windows Command Prompt"

#include <iostream>

int main() {
	//Adding files
	system("git add -A");
	system("git commit -a");
	system("git push");

	std::cin.get();
	return 0;
}