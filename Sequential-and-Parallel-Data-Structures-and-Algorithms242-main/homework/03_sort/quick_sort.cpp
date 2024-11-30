/**
 * Assignment: Quick Sort
 */
#include "quick_sort.h"
#include "item_type.h"
#include "sort_strategy.h"
#include <vector>

// Your code goes here.
int Partition(std::vector<ItemType> &list, int startIndex, int endIndex,
              int &comparisons, int &writes) {
  int midpoint = startIndex + (endIndex - startIndex) / 2;
  ItemType pivot = list[midpoint];
  int low = startIndex;
  int high = endIndex;

  bool done = false;
  while (!done) {
    while (list[low].comparedTo(pivot) == LESS) {
      comparisons += 1;
      low = low + 1;
    }
    while (pivot.comparedTo(list[high]) == LESS) {
      comparisons += 1;
      high = high - 1;
    }

    if (low >= high) {
      done = true;
    } else {
      ItemType temp = list[low];
      list[low] = list[high];
      writes += 1;
      list[high] = temp;
      writes += 1;
      low = low + 1;
      high = high - 1;
    }
  }
  return high;
}
void quickSort(std::vector<ItemType> &list, int startIndex, int endIndex,
               int &comparisons, int &writes) {
  if (endIndex <= startIndex) {
    return;
  }

  int high = Partition(list, startIndex, endIndex, comparisons, writes);

  quickSort(list, startIndex, high, comparisons, writes);

  quickSort(list, high + 1, endIndex, comparisons, writes);
}

void QuickSort::sort(std::vector<ItemType> &list) {
  comparisons = 0;
  writes = 0;
  int startIndex = 0;
  int endIndex = list.size();
  quickSort(list, startIndex, endIndex, comparisons, writes);
}