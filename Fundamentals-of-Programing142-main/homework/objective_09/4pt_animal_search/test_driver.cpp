/**
 * Implement your function in the file pointer_circle.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "animal_search.h"
#include <cstdint>
#include <iostream>

int main() {
  std::vector<std::string> animals = {"cat", "dog", "pig"};
  bool found = false;
  uint64_t index = 0;
  animalSearch(animals, "do", found, index);
  if (found) {
    std::cout << "Found animal at index: " << index << std::endl;
  } else {
    std::cout << "Animal not found." << std::endl;
  }
  return 0;
}
