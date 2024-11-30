/**
 * Implement your function in the file pointer_sum.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "car.h"
#include <iostream>

int main() {
  Car myCar;
  myCar.fillTank(15);
  myCar.drive(105);
  std::cout << "Remaining gas is: " << myCar.getGas() << std::endl;
  return 0;
}
