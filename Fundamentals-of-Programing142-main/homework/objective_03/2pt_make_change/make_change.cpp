/*************************************************************************
 * Objective 4: A change computation program
 *
 * File Name: make_change.cpp
 * Name:      ?
 * Course:    CPTR 142
 */

#include <iostream>
#include <iterator>
#include <ostream>

int main() {
  // define variables
  int dollar_20, dollar_10, dollar_5, dollar_1, c_25, c_10, c_5, c_1, payback;
  double cost, paid;
  // Prompt for and collect input
  std::cout << "Enter the cost in dollars and cents: $";
  std::cin >> cost;
  std::cout << "Enter the amount paid in dollars and cents: $";
  std::cin >> paid;
  // convert to cents and compute change
  cost *= 100;
  paid *= 100;
  payback = paid - cost;
  dollar_20 = payback / 2000;
  payback %= 2000;
  dollar_10 = payback / 1000;
  payback %= 1000;
  dollar_5 = payback / 500;
  payback %= 500;
  dollar_1 = payback / 100;
  payback %= 100;
  c_25 = payback / 25;
  payback %= 25;
  c_10 = payback / 10;
  payback %= 10;
  c_5 = payback / 5;
  payback %= 5;
  c_1 = payback / 1;
  payback %= 1;
  // now display number of dollars and coins
  std::cout << std::endl << "Your change is:" << std::endl;
  std::cout << "  - twenty-dollar bills: " << dollar_20 << std::endl;
  std::cout << "  - ten-dollar bills: " << dollar_10 << std::endl;
  std::cout << "  - five-dollar bills: " << dollar_5 << std::endl;
  std::cout << "  - one-dollar bills: " << dollar_1 << std::endl;
  std::cout << "  - quarters: " << c_25 << std::endl;
  std::cout << "  - dimes: " << c_10 << std::endl;
  std::cout << "  - nickels: " << c_5 << std::endl;
  std::cout << "  - pennies: " << c_1 << std::endl;

  return 0;
}
