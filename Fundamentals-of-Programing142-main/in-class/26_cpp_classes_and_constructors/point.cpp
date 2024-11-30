/*************************************************************************
 *
 * In-Class Exercise: Classes
 *
 * File Name: point.cpp
 * Name:      ?
 * Course:    CPTR 142
 */

#include <iostream> // std::cin and std::cout

#include <math.h> // pow

class Point {
public:
Point(int newX, int newY);
  void setX(int newX);
  void setY(int newY);
  double distanceFromOrigin();
  double distanceFrom(Point other);

private:
  int x, y;
};

// main entry point
int main() {
  // use the new class
  
  int x, y;
  double distance;
  std::cout << "Enter x coordinate: ";
  std::cin >> x;
  std::cout << "Enter y coordinate: ";
  std::cin >> y;

  // TODO: assign values
//target.setX(x);
//target.setY(y);
Point target (x,y);
 
  std::cout << "Enter x coordinate: ";
  std::cin >> x;
  std::cout << "Enter y coordinate: ";
  std::cin >> y;
//Arrow.setX(x);
//Arrow.setY(y);
Point Arrow (x,y);
  // TODO: obtain distance
  distance = target.distanceFromOrigin();

  std::cout << "The target is " << distance << " units from origin."
            << std::endl;

distance = target.distanceFrom(Arrow);
  std::cout << "The target is " << distance << " units from other."
            << std::endl;
  return 0;
}

//	Class implementation comes later!

Point::Point(int newX, int newY) {
    x = newX;
    y = newY;
}

void Point::setX(int newX) { x = newX; }

void Point::setY(int newY) { y = newY; }

double Point::distanceFromOrigin() { return sqrt(pow(x, 2) + pow(y, 2)); }
double Point::distanceFrom(Point other) {return sqrt(pow(x - other.x, 2) + pow(y-other.y, 2));};
