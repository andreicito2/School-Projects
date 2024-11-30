/**
 * Class: Circle
 *
 * DO NOT EDIT FILE
 * Changes will not be considered during grading.
 */
#pragma once
#include <cmath>

class Circle {
public:
  Circle(double radius) { this->radius = radius; }
  double area() { return M_PI * radius * radius; }

private:
  double radius;
};
