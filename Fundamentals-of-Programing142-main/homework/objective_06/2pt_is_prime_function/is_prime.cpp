/**
 * Intermediate: Create a function that returns if a given number is prime.
 */
#include "is_prime.h"

// TODO Add your code here
bool isPrime(int num) {
  bool flag = true;
  if (num == 1) {
    flag = true;
  }
  if (num > 1) {
    for (int i = 2; i < num; i++) {
      if ((num % i) == 0) {
        flag = false;
        break;
      }
    }
  }
  return flag;
}