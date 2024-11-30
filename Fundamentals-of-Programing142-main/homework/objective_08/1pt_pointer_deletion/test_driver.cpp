/**
 * Implement your function in the file reset_pointer.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "reset_pointer.h"
#include <iostream>

int main() {
  int *pointer = new int(10);

  resetPointer(pointer);
  if (pointer == nullptr) {
    std::cout << "The pointer has been deleted correctly." << std::endl;
  }

  return 0;
}
