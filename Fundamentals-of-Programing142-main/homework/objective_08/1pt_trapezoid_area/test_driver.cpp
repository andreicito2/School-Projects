/**
 * Implement your function in the file pointer_sum.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "trapezoid_area.h"
#include <iostream>

int main() {
  double *result = trapezoidArea(10, 5, 3);
  std::cout << "The area is " << (*result) << std::endl;
  delete result;
  result = nullptr;
  return 0;
}
