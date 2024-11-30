/**
 * Assignment: Selection Sort
 */
#include "selection_sort.h"
#include "item_type.h"
#include <vector>

// Your code goes here.
void SelectionSort::sort(std::vector<ItemType> &list) {
  comparisons = 0;
  writes = 0;
  int size = list.size();

  for (int i = 0; i < size; i++) {
    int smallValIndex = i;
    for (int j = i + 1; j < size; j++) {
      if ((list[j].comparedTo(list[smallValIndex])) == LESS) {
        comparisons += 1;
        smallValIndex = j;
      }
    }
    ItemType temp = list[i];
    list[i] = list[smallValIndex];
    writes += 1;
    list[smallValIndex] = temp;
    writes += 1;
  }
}