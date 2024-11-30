/*************************************************************************
 *
 * In-Class Exercise:  Compute the volume of a right circular cylinder
 *                     of a given radius and height
 *
 * File Name: volume.cpp
 * Course:    CPTR 142
 *
 */

#include <cmath>
#include <iostream>
using namespace std;
int main() {

  // define constant
    const double pi = 3.14159; 
  // define variables
    double height;
    double radius;
    double volume;
  // prompt for input
    cout << "input height:" << endl;
    cin >> height;
    cout << "imput radius:" << endl;
    cin >> radius;

   // print out the volume (use the pow function)
    volume = pi * pow(radius, 2) * height;
    cout << "The Volume is: " <<volume << endl;
  return 0;
}
