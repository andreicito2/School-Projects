/*************************************************************************
 *
 * In-Class Demonstration:  Compute the slope between two points.
 *
 * File Name: slope.cpp
 * Course:    CPTR 142
 *
 */

#include <iostream>

int main() {
using namespace std;
  // define variables
    char garbage;
    double slope;
    double x1, y1, x2, y2;
  // prompt for input
    cout << "Enter point one (x,y): ";
    cin >> garbage >> x1 >> garbage >> y1 >> garbage;
    cout << "ernter Point two (x,y): ";
    cin >> garbage >> x2 >> garbage >> y2>> garbage;

  // print out the slope
    slope = (y2 -y1) / (x2- x1);
    cout << "The slope between these two points is: " << slope << endl ;
  return 0;
}
