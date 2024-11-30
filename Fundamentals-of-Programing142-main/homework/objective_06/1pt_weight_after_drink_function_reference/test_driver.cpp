/**
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "weight_after_drink.h"
#include <iostream>

int main() {
  double weight = 100;
  double gallons = 1;
  std::cout << "A " << weight << " pound animal drank " << gallons
            << " gallon(s)." << std::endl;
  weightAfterDrink(weight, gallons);
  std::cout << "Their new weight is " << weight << " pounds." << std::endl;
  return 0;
}
