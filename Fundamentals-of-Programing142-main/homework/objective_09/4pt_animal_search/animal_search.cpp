/**
 * Expert: Vector search using recursion.
 */
#include "animal_search.h"
#include <cstdint>
#include <string>
#include <vector>
// Your code goes here
void animalSearch(std::vector<std::string> anumal, std::string text, bool &flag,
                  uint64_t &num) {
  if (num == anumal.size()) {
    flag = false;
  } else {
    if (text == anumal.at(num)) {
      flag = true;
    } else {
      num += 1;
      animalSearch(anumal, text, flag, num);
    }
  }
}