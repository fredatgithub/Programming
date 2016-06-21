#include <iostream>

using std::cout;
using std::cin;

int main() {
	int numberOfCats = 6; //Initialized and declared the number
	int numberOfDogs = 8;
	int totalAnimals = numberOfCats + numberOfDogs;

	cout << "Number of Cats: " << numberOfCats << "\n";
	cout << "Number of Dogs: " << numberOfDogs << "\n";
	cout << "Number of Animals: " << totalAnimals << "\n\n";

	cout << "A new dog was found! \n";

	numberOfDogs = numberOfDogs + 1; //This adds one to the original amount of dogs
	cout << "Number of Dogs: " << numberOfDogs << "\n";
	cout << "Number of Animals: " << totalAnimals << "\n";

	cin.get();
	return 0;
}