/*************************************************************************
 *
 * In-Class Exercises: Test the methods for exiting a loop:
 *                       continue, break, and exit(0)
 *
 * File Name: loop_exit.cpp
 * Course:    CPTR 142
 */

#include <iostream> // for std::cout and std::cin streams

int main() {

  int num = 2, sum = 0;
  while (num < 20) {
    num++;
    if (num == 10 || num == 11) {
      exit(0);
    }
    sum += num;
  }
  std::cout << "The sum is " << sum << std::endl;

  return 0;
}
