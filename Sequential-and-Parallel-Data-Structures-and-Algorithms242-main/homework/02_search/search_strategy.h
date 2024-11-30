#pragma once
#include "item_type.h"
#include "vector"

class SearchStrategy {
public:
  bool meetsRequirements(std::vector<ItemType> list);
  int indexOf(std::vector<ItemType> list, ItemType key);
  int getComparisons() { return comparisons; }

protected:
  int comparisons;
};
