/**
 * Assignment: Sorting
 */
#pragma once
#include "item_type.h"
#include <vector>

class SortStrategy {
public:
  void sort(std::vector<ItemType> &list);
  int getComparisons() { return comparisons; }
  int getWrites() { return writes; }

protected:
  int comparisons;
  int writes;
};
