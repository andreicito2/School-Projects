/**
 * Implement your function in the file rectangle_perimeter.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include <iostream>

#include "rectangle_perimeter.h"

int main() {
  int length = 7;
  int width = 5;

  int *ptrLength = &length;
  int *ptrWidth = &width;

  int result = rectanglePerimeter(ptrLength, ptrWidth);

  std::cout << "A " << (*ptrLength) << " by " << (*ptrWidth)
            << " rectangle has a perimeter of " << result << "." << std::endl;

  return 0;
}
