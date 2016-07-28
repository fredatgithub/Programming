#include <iostream>
#include <string.h>

std::string sort_strings(std::string string1, std::string string2, std::string string3) {
	std::string ordered_string;

	if(string1 < string2 && string1 < string3) {
		if(string2 < string3) {
			ordered_string = string1 + ' ' + string2 + ' ' + string3 + '\n';
			return ordered_string;
		}

		if(string2 > string3) {
			ordered_string = string1 + ' ' + string3 + ' ' + string1 + '\n';
			return ordered_string;
		}
	}

	if(string2 < string1 && string2 < string3) {
		if(string1 < string3) {
			ordered_string = string2 + ' ' + string1 + ' ' + string3 + '\n';
			return ordered_string;
		}

		if(string1 > string3) {
			ordered_string = string2 + ' ' + string3 + ' ' + string1 + '\n';
			return ordered_string;
		}
	}

	if(string3 < string1 && string3 < string2) {
		if(string1 < string2) {
			ordered_string = string3 + ' ' + string1 + ' ' + string2 + '\n';
			return ordered_string;
		}

		if(string1 > string2) {
			ordered_string = string3 + ' ' + string2 + ' ' + string1 + '\n';
			return ordered_string;
		}
	}
}

int main(int argc, char const *argv[]) {

	std::cout << "Please enter three words that I will order: ";
	std::string word1, word2, word3;
	std::cin >> word1 >> word2 >> word3;

	std::cout << sort_strings(word1, word2, word3);

	std::cin.get();
	std::cin.get();
	return 0;
}