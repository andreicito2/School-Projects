/**
 * Intermediate: Arthmetic calculation using recursion.
 */
#include "fibonacci.h"
#include <iostream>
#include <string>

int fibonacci(int num, std::string var) {
  std::cout << var << num << std::endl;
  var += "  ";
  if (num == 0) {
    return 0;
  } else if (num == 1) {
    return 1;
  } else {

    return fibonacci(num - 1, var) + fibonacci(num - 2, var);
  }
}