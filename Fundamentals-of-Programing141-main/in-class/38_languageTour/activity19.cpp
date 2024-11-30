/*
C++ Code to estimate pi using a given number of terms.
*/

#include <iostream>
using namespace std;

float estimatePi(int terms) {
  if (terms <= 0) { return 0.0; }      // check for bad inputs
  float numerator = -1.0;
  float pi        = 0.0;
  for ( int i = 0; i < terms; i += 1 ) {  // loop from 0 to terms-1
    numerator   *= -1;
    int denominator  = 2*i + 1;
    pi          += numerator/denominator;
  }
  return 4*pi;
}

/* C++ function to test the estimatePi() function above */
void testEstimatePi() {
  int vals[6] = { -1, 0, 1, 2, 10, 100 };
  for (int i = 0; i < 6; i++ ) {
    cout << vals[i] << ": " << estimatePi(vals[i]) << endl;
  }
}

int main() {
  testEstimatePi();                      // Run the test function
}
