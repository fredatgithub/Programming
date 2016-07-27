#include <iostream>
#include <string.h>

// Detect previous words
void detect_repeated_words(std::string previous_word, std::string current_word) {
	if(previous_word == current_word) {
		std::cout << "Repeated word: " << current_word << ".\n";
	} 
	else if (previous_word != current_word) {
		std::cout << "Nothing repeated.\n";
	}
}

int main(int argc, char const *argv[]) {
	std::string previous_word = " "; 	// Initialize as nothing
	std::string current_word;

	while(std::cin >> current_word) {
		detect_repeated_words(previous_word, current_word);
		previous_word = current_word; // This will set the old word to the old one
	}

	return 0;
}