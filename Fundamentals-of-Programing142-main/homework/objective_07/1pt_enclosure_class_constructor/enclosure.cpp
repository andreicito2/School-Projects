/**
 * Beginner: Create a class constructor.
 */
#include "enclosure.h"
#include <iostream>

void Enclosure::printDetails() {
  std::cout << "The " << type << " enclosure is " << size << " square feet."
            << std::endl;
}
