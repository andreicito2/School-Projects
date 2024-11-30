/**
 * Assignment: Sorting
 */
#pragma once

#include "item_type.h"
#include "sort_strategy.h"
#include <vector>

class SelectionSort : public SortStrategy {
public:
  void sort(std::vector<ItemType> &list);
  // Function: Selection Sort a vector for key and count the number of
  // comparisons and writes.
  // Pre:     List has been initialized.
  // Post:    The list is modified to be in sorted order,
  // comparisons has the number comparisons and swaps made during the writes.

private:
  // Your code goes here.
};
