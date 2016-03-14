#include <iostream>

using std::cout;
using std::endl;

int main() {



	for (int value = 100; value > 0; value--) {

		cout << " Value: \t" << value << endl;

		if (value == 1) {
			value = 100;
		}
	}

	return 0;
}