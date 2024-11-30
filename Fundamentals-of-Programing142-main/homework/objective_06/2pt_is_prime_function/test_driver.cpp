/**
 * Implement your function in the file is_prime.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "is_prime.h"
#include <iostream>

int main() {
  if (isPrime(20)) {
    std::cout << "20 is prime" << std::endl;
  } else {
    std::cout << "20 is not prime" << std::endl;
  }
  return 0;
}
