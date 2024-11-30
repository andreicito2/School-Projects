/**
 * Cube class definition.
 */
#pragma once

class Cube {
public:
  Cube(double newSide) { side = newSide; }
  double getSurfaceArea();

private:
  double side;
};
