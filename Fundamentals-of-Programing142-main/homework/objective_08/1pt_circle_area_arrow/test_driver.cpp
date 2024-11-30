/**
 * Implement your function in the file pointer_circle.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "circle.h"
#include "circle_area.h"
#include <iostream>

int main() {
  Circle *ptrCircle = new Circle(4);
  std::cout << "Area: " << circleArea(ptrCircle) << std::endl;
  return 0;
}
