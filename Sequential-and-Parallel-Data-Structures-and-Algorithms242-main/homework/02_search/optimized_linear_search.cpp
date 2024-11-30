/**
 * Optimized Linear Search
 */
#include "optimized_linear_search.h"
#include "item_type.h"
#include <algorithm>
#include <iostream>
#include <vector>

bool OptimizedLinearSearch::meetsRequirements(std::vector<ItemType> list) {
  // Your code goes here.
  // check if sorted
  if (list.size() == 0) {
    return false;
  }
  for (unsigned int i = 0; i < list.size(); i++) {
    if (i + 1 < list.size()) {
      if (list.at(i).comparedTo(list.at(i + 1)) != LESS) {
        return false;
      }
    }
  }
  return true;
}

int OptimizedLinearSearch::indexOf(std::vector<ItemType> list, ItemType key) {
  // Your code goes here.
  // use while loops
  // int temp = list.size();
  comparisons = 0;
  if (list.size() == 0) {
    return -1;
  }
  comparisons = 0;
  for (unsigned int i = 0; i < list.size(); i++) {
    comparisons += 1;
    if (list[i].getValue() == key.getValue()) {

      return i;
    } else if (list[i].getValue() > key.getValue()) {

      return -1;
    }
  }
  return -1;
}
