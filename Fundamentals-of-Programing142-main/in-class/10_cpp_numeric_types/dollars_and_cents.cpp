/*************************************************************************
 *
 * In-Class Demonstration:  Formatting the Output of a Floating-Point Var
 *
 * File Name: dollarsAndCents.cpp
 * Course:    CPTR 142
 *
 */

#include <iomanip>
#include <iostream>

int main() {
  // define variables for user input
  double money;
  int children;

  // get the numbers
  std::cout << "How much money do you have in your pocket? $";
  std::cin >> money;
  std::cout << "How many children do you have? ";
  std::cin >> children;

  // compute the values
  int centsPerChild = money * 100 / children;
  double perChild = centsPerChild / 100.0;
  double leftOver = money - perChild * children;

  // print out the results
  std::cout << std::endl << std::fixed << std::setprecision(2);
  std::cout << "Give each child $" << perChild;
  std::cout << " and keep $" << leftOver << " for yourself." << std::endl;

  return 0;
}
