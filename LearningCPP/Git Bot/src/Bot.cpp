//This program requires that all you do is have http://git-scm.com/ installed and install with "Use from the Windows Command Prompt"

// writing on a text file
#include <iostream>
#include <fstream>

int main() {
	std::ofstream myfile("Git.sh");
	if (myfile.is_open())
	{
		myfile << "git add -A\n";
		myfile << "git commit -a\n";
		myfile << "git push\n";
		myfile.close();
	}
	else {
		std::cout << "Unable to open file";
	}
	return 0;
}