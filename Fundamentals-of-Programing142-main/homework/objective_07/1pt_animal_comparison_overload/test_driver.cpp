/**
 * Implement your function in the file identification.h
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "animal.h"
#include "animal_comparison.h"
#include <iostream>

int main() {
  Animal myHorse = Animal("horse", 2);
  Animal myZebra = Animal("zebra", 5);
  if (myHorse == myZebra) {
    std::cout << "My horse has stripes" << std::endl;
  } else {
    std::cout << "My horse is not a zebra" << std::endl;
  }
}
