/**
 * Intermediate: Write the `greatestCommonDivisor` function definition that
 * returns the greatest common divisor from two given numbers
 */
#include "greatest_common_divisor.h"

// TODO Add your code here
int greatestCommonDivisor(int num1, int num2) {

  int temp;
  if (num1 > num2) {
    temp = (num1 % num2);
  } else {
    temp = (num2 % num1);
  }
  if (num1 == num2) {
    temp = num1;
  }
  return temp;
}