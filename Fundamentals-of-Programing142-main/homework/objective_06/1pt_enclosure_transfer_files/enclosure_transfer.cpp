#include <iostream>
#include <vector>

void enclosureAssignment(std::vector<std::string> &assignments, int enclosure,
                         std::string animal) {
  assignments.at(enclosure - 1) = animal;
}
void enclosureRemoval(std::vector<std::string> &assignments, int enclosure) {
  assignments.at(enclosure - 1) = "";
}
