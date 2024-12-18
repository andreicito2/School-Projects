#include <cmath>
#include <iostream>
#include <vector>

int main() {

  // put first 100 powers of two in x
  std::vector<double> x(100);
  for (int i = 0; i < x.size(); i++) {
    x.at(i) = pow(2, i);
  }

  // define scores
  std::vector<int> y = {95, 68, 82, 75, 84, 79, 73, 91};

  // sum the elements of scores
  int sum = 0;
  for (int i = 0; i < y.size(); i++) {
    sum += y.at(i);
  }

  return 0;
}