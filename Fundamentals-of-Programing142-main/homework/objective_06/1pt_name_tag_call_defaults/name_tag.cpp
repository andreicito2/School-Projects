/**
 * Beginner: Create a function that calls print_name_tag.
 *
 * DO NOT EDIT FILE
 * Changes will not be considered during grading.
 */
#include "name_tag.h"
#include <iostream>
#include <string>

void printNameTag(std::string name, int age, bool supervision) {
  std::cout << "+------------------------" << std::endl;
  std::cout << "| Name: " << name << std::endl;
  std::cout << "| Age: " << age << std::endl;
  if (supervision) {
    std::cout << "| Requires supervision" << std::endl;
  }
  std::cout << "+------------------------" << std::endl;
}
