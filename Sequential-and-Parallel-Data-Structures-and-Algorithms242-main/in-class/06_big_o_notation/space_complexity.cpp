/**
 * In-class activity looking at the idea of Big O Notation.
 *
 * - Identify the space complexity of these functions.
 *
 * Source: https://www.codingninjas.com/blog/2021/01/05/what-is-big-o-notation/
 */
#include <iostream>

/**
 * What is the Big O Notation for space used?
 */
void printMessage() {
  for (int i = 1; i <= 5; i++) {
    std::cout << "Hey there! " << i << std::endl;
  }
}

/**
 * What is the Big O Notation for space used?
 */
void collectNumbers() {
  int n;
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    arr[i] = i;
  }
}

int main() {

  printMessage();

  collectNumbers();

  return 0;
}
