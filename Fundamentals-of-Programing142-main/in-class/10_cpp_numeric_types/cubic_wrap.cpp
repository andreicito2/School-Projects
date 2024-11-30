/*************************************************************************
 *
 * In-Class Exercise:  Determine how large a number can be before its cube
 *                     overflows the variable range.
 *
 * File Name: cubeWrap.cpp
 * Course:    CPTR 142
 *
 */

#include <iostream>

int main() {
  // try with "short int" & "int" types
  short int num;

  // get the number
  std::cout << "Enter the Number: ";
  std::cin >> num;

  // cube it
  num = num * num * num;

  // and print out the result
  std::cout << "The cube is: " << num << std::endl;

  return 0;
}
