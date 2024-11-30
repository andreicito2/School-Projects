/*************************************************************************
 *
 * File Name: increase.cpp
 * Username:  cslab1
 * Username:  cslab2
 * Username:  cslab3
 * Course:    CPTR 142
 *
 */

#include <iostream> // for cin and cout
using namespace std;

// function prototype
void increase(int x, int &y, int *z);

/*====================================================================
 * Main program
 */
int main() {
  int a = 1;
  int b = 2;
  int c = 3;
  cout << "Before: a = " << a << "; b = " << b << "; c = " << c << endl;

  // TODO: call increase() with appropriate passing of a, b, and c
 

  cout << "After: a = " << a << "; b = " << b << "; c = " << c << endl;
  return 0;
}

// pass by value, reference, and pointer
void increase(int x, int &y, int *z) {
  // TODO: increase by 10 the values referenced by x, y, and z


}
