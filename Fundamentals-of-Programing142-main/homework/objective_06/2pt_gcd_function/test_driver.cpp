/**
 * Implement your function in the file greatest_common_divisor.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "greatest_common_divisor.h"
#include <iostream>

int main() {
  int gcd = greatestCommonDivisor(10, 15);
  std::cout << "The greatest common divisor for 10 and 15 is " << gcd
            << std::endl;
  return 0;
}
