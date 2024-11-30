/**
 * Implement your function in the file identification.h
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "identification_card.h"
#include <iostream>

int main() {
  IdentificationCard id = IdentificationCard();
  id.setIdNumber(17);
  std::cout << "My ID number is " << id.getIdNumber() << std::endl;
}
