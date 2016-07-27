#include <iostream>
#include <string.h>

// This is kind of a spin off of the original drill, I got bored with it and 
// wasn't happy so please exuse me for anything sad.. I just needed help man

// Drill 1
std::string letter_prompt() {
	std::cout << "Enter the letter recipient: ";
	std::string first_name, last_name;
	std::cin >> first_name >> last_name;

	std::string letter_prompt = "\tDear " + first_name + ',' + "\n";
	return letter_prompt;
}

std::string letter_introductory() {
	std::string letter_introductory = "\nHey! You're an amazing person. Please never forget that! You are really important to people, no matter what...\n";
	return letter_introductory;
}

std::string letter_body(){
	std::string letter_body = "\nI know that things have been rough here recently, but things will always get better. You remind me of myself a while ago. I was going through a hard time, and you can, and will get out of it. I promise you, just keep your head up high, look at the bright side of things as well, maybe you have more chances, new experiences, meet new people, go to new places, go to parties! Who even cares dude! Have some fun, get out there and cheer yourself up. Please, please, please just dont do anything to yourself man...\n";
	return letter_body;
}

std::string letter_close() {
	std::string letter_close = "\n\t\tThanks. \n\t\t\tBlake Barnes";
	return letter_close;
}

int main(int argc, char const *argv[]) {

	std::cout << letter_prompt();
	std::cout << letter_introductory();
	std::cout << letter_body();
	std::cout << letter_close();

	std::cin.get();
	std::cin.get();
	return 0;
}