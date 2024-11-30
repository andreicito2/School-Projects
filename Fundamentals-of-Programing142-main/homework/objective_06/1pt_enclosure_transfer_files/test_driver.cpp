/**
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "enclosure_transfer.h"
#include <iostream>
#include <string>
#include <vector>

// Prototype
// void enclosureAssignment(std::vector<std::string> &assignments, int
// enclosure,
//                          std::string animal);
// void enclosureRemoval(std::vector<std::string> &assignments, int enclosure);

// Function definition
// void enclosureAssignment(std::vector<std::string> &assignments, int
// enclosure,
//                          std::string animal) {
//   assignments.at(enclosure - 1) = animal;
// }
// void enclosureRemoval(std::vector<std::string> &assignments, int enclosure) {
//   assignments.at(enclosure - 1) = "";
// }

int main() {
  std::vector<std::string> assignments = {"Lion", "Beaver", "Unicorn", "",
                                          "Raven"};
  enclosureRemoval(assignments, 3);
  enclosureAssignment(assignments, 4, "Bobcat");
  for (uint64_t i = 0; i < assignments.size(); i++) {
    std::cout << "Enclosure " << (i + 1) << ": " << assignments.at(i)
              << std::endl;
  }
  return 0;
}
