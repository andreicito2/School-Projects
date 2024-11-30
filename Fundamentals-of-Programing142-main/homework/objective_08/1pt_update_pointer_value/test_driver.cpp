/**
 * Implement your function in the file pointer_sum.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include <iostream>

#include "update_pointer_value.h"

int main() {
  int value = 10;
  int newValue = 3;

  int *ptrExisting = &value;
  int *ptrNewValue = &newValue;
  updatePointerValue(ptrExisting, ptrNewValue);
  std::cout << "The new value is " << *ptrExisting << std::endl;

  return 0;
}
