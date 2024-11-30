/**
 * Implement your function in the file gallons_to_liters.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "gallons_to_liters.h"
#include <iostream>

int main() {
  double gallons = 10;
  double liters = gallons_to_liters(gallons);
  std::cout << "There are " << liters << " liters in " << gallons << " gallons."
            << std::endl;
  return 0;
}
