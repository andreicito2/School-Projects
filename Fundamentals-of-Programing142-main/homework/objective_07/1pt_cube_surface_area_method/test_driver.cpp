/**
 * Implement your function in the file cube.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "cube.h"
#include <iostream>

int main() {
  double side = 7;
  Cube myCube = Cube(side);
  std::cout << "A cube with " << side << " has a surface area of "
            << myCube.getSurfaceArea() << std::endl;
  return 0;
}
