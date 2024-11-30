#include <iostream>

int main() {
  // ----------------------------------------- declare variables
  double floatOne, floatTwo;
  int integer = 35;
  // ----------------------------------------- part I
  floatOne = integer;
  std::cout << "original number: " << integer << std::endl;
  std::cout << "after conversion: " << floatOne << std::endl << std::endl;
  // ----------------------------------------- part II
  floatOne = 3.9;
  floatTwo = static_cast<int>(floatOne);
  std::cout << "second number: " << floatOne << std::endl;
  std::cout << "after conversion: " << floatTwo << std::endl;
}
