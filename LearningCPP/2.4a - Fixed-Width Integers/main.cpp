#include <iostream>
#include <cstdint> // This is the header for the fixed ints from C99

int main() {
  // Example for uint8_t
  std::int16_t i(9);
  i = 12;
  std::cout << "Size of int16_t: " << sizeof(int16_t) << "\n";
  std::cout << "Value in int16_t: " << i << "\n";


  return 0;
}
