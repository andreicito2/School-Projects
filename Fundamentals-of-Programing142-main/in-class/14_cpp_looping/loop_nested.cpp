/*************************************************************************
 *
 * In-Class Exercises:  Test two nested loops
 *
 * File Name: loop_nested.cpp
 * Course:    CPTR 142
 */

#include <iostream> // for std::cout and std::cin streams

int main() {

  // example #1: independent loops
  int row, col;

  for (row = 1; row <= 5; row++) {
    for (col = 1; col <= 5; col++) {
      std::cout << " \t" << row * col;
    }
    std::cout << std::endl;
  }

  // example #2: correlated loops
  int i, j;

  for (i = 0; i < 6; i++) {
    for (j = 0; j <= i; j++) {
      std::cout << " * ";
    }
    std::cout << std::endl;
  }

  return 0;
}