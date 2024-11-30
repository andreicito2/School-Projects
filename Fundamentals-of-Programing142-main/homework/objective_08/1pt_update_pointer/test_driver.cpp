/**
 * Implement your function in the file pointer_sum.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "pointer_update.h"
#include <iostream>

int main() {
  int newNumber = 7;
  int *ptrNumber = nullptr;

  pointerUpdate(newNumber, ptrNumber);
  std::cout << "Pointer value: " << *ptrNumber << std::endl;

  std::cout << "Addresses match: " << ptrNumber << " = " << &newNumber
            << std::endl;
  return 0;
}
