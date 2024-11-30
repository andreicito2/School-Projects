/**
 * Assignment: Searching
 */
#include "linear_search.h"
#include "item_type.h"
#include <vector>

bool LinearSearch::meetsRequirements(std::vector<ItemType> list) {
  // Your code goes here.
  if (list.size() > 0) {
    return true;
  } else {
    return false;
  }
}

int LinearSearch::indexOf(std::vector<ItemType> list, ItemType key) {
  // Your code goes here.
  // my
  comparisons = 0;
  for (unsigned int i = 0; i < list.size(); i++) {
    if (list[i].getValue() == key.getValue()) {
      comparisons += 1;
      return i;
    } else {
      comparisons += 1;
    }
  }
  return -1;
}