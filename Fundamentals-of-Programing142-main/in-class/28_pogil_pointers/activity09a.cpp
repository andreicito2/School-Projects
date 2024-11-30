#include <iostream>

int main() {
  int myArray[] = {40, 30, 20, 10};
  int *p = myArray;
  // your code here
  std::cout << "Value of p: " << p << std::endl;
  std::cout << "Value of *p: " << *p << std::endl;
  std::cout << "Value of myArray: ";
  for (int i = 0; i < 3; i++) {
    std::cout << myArray[i] << ",";
  }
  std::cout << myArray[3] << std::endl;
}
