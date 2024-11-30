/**
 * Assignment: Insertion Sort
 */
#include "insertion_sort.h"
#include "item_type.h"
#include <vector>

// Your code goes here.
void InsertionSort::sort(std::vector<ItemType> &list) {
  comparisons = 0;
  writes = 0;
  int size = list.size();
  for (int i = 0; i < size; i++) {
    int j = i;
    while (j > 0 && (list[j].comparedTo(list[j - 1]) == LESS)) {
      comparisons += 1;
      ItemType temp = list[j];
      list[j] = list[j - 1];
      writes += 1;
      list[j - 1] = temp;
      writes += 1;
      j--;
    }
  }
}