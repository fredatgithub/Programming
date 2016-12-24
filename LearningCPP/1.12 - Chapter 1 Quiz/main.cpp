#include <iostream>
#include "io.h"

int main() {
  int a = read_number();
  int b = read_number();
  std::cout << "Answer: " << write_answer(a, b) << "\n";
  
  return 0;
}
