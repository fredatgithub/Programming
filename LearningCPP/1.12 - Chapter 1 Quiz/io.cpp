#include "io.h"

#include <iostream>

int read_number() {
  std::cout << "Please answer a number: ";
  
  int num;
  std::cin >> num;
  
  return num;
}

int write_answer(int a, int b) {
  return a + b;
}
