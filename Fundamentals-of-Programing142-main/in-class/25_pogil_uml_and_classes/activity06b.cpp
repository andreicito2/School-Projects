#include <iostream>
#include <cmath>

// class for a Point
class Point {
public:
  Point(double x, double y) {
    this->xPos = x;
    this->yPos = y;
  }
  void setX(double x) { this->xPos = x; }
  void setY(double y) { this->yPos = y; }
  double getX() { return this->xPos; }
  double getY() { return this->yPos; }

private:
  double xPos;
  double yPos;
};

// class for a Circle
class Circle: public Point {
    public:
    Circle(double radius);
    double getRadius();
    double setRadius(double radius);
    double area();
    double circumference();
    private:
    double radius;
};



int main() {

  // define a unit circle
  Circle unit(1);

  // move it to the point (1,1)
  unit.setX(1);
  unit.setY(1);

  // print out its information
  std::cout << "Location: (" << unit.getX() << "," << unit.getY() << ")"
            << std::endl;
  std::cout << "Area: " << unit.area() << " square units" << std::endl;
  std::cout << "Circumference: " << unit.circumference() << " units"
            << std::endl;
}