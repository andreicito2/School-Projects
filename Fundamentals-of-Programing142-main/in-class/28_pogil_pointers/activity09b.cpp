#include <iostream>

int main() {
  int numOne = 1892;
  int numTwo = 1973;
  int numThree = 2008;
  int *numArray[3] = {&numOne, &numTwo, &numThree};
  int *p;

  p = &numOne;
  std::cout << "Number: " << *p << std::endl;
  p = &numTwo;
  std::cout << "Number: " << *p << std::endl;
  p = &numThree;
  std::cout << "Number: " << *p << std::endl;
}
