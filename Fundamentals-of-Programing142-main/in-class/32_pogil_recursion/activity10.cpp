/**
 * Exercise: Recursion
 */

#include <iostream>

int factorial(int n) {
  std::cout << "n is " << n << std::endl;
  if (n == 0) {
    return 1; // base case
  } else {
    std::cout << "need factorial of " << (n - 1) << std::endl;
    int answer = factorial(n - 1);
    std::cout << "factorial of " << (n - 1) << " is " << answer << std::endl;
    return n * answer;
  }
}

int main() {
  std::cout << "Testing 5!" << std::endl;
  int answer = factorial(3);
  std::cout << "5! = " << answer << std::endl;
}
