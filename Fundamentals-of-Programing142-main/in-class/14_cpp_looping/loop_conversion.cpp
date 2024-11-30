/*************************************************************************
 *
 * In-Class Exercises:  Conversion between types of loops
 *
 * File Name: loop_conversion.cpp
 * Course:    CPTR 142
 */

#include <iostream> // for std::cout and std::cin streams

int main() {

  // Convert the following for loop to a while loop
  int count = 0, product = 1, i =1;
  while( i <= 4) {
    product *= i;
    count++;
    i++;
  }
  std::cout << "product: " << product << ", count: " << count << std::endl;

  // Convert the following while loop to a do-while loop
  int a = 0, sum = 0;
  do {
    sum += a;
    a--;
  }while (a != -1000);
  std::cout << "a: " << a << ", sum: " << sum << std::endl;

  // Convert the following while loop to a for loop
  int x= 100, total = 0;
  for (x=100;x >= 75; x--) {
    total += x;
   
  }
  std::cout << "x: " << x << ", total: " << total << std::endl << std::endl;

  return 0;
}