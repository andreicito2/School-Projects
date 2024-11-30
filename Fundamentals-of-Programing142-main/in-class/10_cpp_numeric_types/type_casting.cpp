/*************************************************************************
 *
 * In-Class Quiz:  Can you determine the output of each block without
 *                 running this program?
 *
 * File Name: typeCasting.cpp
 * Course:    CPTR 142
 *
 */

#include <cmath>
#include <iostream>

int main() {

  // block #1
  std::cout << "Block #1" << std::endl;
  int a = 4, b = 8;
  std::cout << a / b << std::endl;
  std::cout << static_cast<double>(a) / b << std::endl;
  std::cout << a / static_cast<double>(b) << std::endl;
  std::cout << static_cast<double>(a / b) << std::endl;
  std::cout << "---------------------------" << std::endl << std::endl;

  // block #2
//   std::cout << "Block #2" << std::endl;
//   int myInt = 2;
//   double myDouble = 2.5;
//   std::cout << myDouble / myInt << std::endl;
//   std::cout << static_cast<int>(myDouble / myInt) << std::endl;
//   std::cout << "---------------------------" << std::endl << std::endl;

  // block #3
  // std::cout << "Block #3" << std::endl;
  // myInt = 2;
  // myDouble = 2.5;
  // myDouble = myInt;
  // std::cout << myDouble << std::endl;
  // myDouble = 2.5;
  // myInt = myDouble;
  // std::cout << myInt << std::endl;
  // std::cout << "---------------------------" << std::endl << std::endl;

  // block #4 (recall that a short int has range -32768 to 32767)
  std::cout << "Block #4" << std::endl;
  std::cout << static_cast<char>(97) << std::endl;
  std::cout << static_cast<short>(100000) << std::endl;

  return 0;
}
