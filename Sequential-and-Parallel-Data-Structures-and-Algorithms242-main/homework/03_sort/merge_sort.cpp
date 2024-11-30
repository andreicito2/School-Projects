/**
 * Assignment: Merge Sort
 */
#include "merge_sort.h"
#include "item_type.h"
#include "sort_strategy.h"
#include <cstdlib>
#include <iostream>
#include <vector>

// Your code goes here.

void Merge(std::vector<ItemType> &list, int leftfirst, int leftLast,
           int rightLast, int &comparisons, int &writes) {
  int mergeSize = rightLast - leftfirst + 1;
  ItemType *mergedNumbers = new ItemType[mergeSize];

  int mergePos = 0;
  int leftPos = leftfirst;
  int rightPos = leftLast + 1;

  while (leftPos <= leftLast && rightPos <= rightLast) {
    if ((list[leftPos].comparedTo(list[rightPos]) == LESS) ||
        (list[leftPos].comparedTo(list[rightPos]) == EQUAL)) {
      comparisons += 1;
      mergedNumbers[mergePos] = list[leftPos];
      writes += 1;
      leftPos++;
    } else {
      mergedNumbers[mergePos] = list[rightPos];
      writes += 1;
      rightPos++;
    }
    mergePos++;
  }
  while (leftPos <= leftLast) {
    mergedNumbers[mergePos] = list[leftPos];
    writes += 1;
    leftPos++;
    mergePos++;
  }
  while (rightPos <= rightLast) {
    mergedNumbers[mergePos] = list[rightPos];
    writes += 1;
    rightPos++;
    mergePos++;
  }
  for (mergePos = 0; mergePos < mergeSize; mergePos++) {
    list[leftfirst + mergePos] = mergedNumbers[mergePos];
    writes += 1;
  }
  delete[] mergedNumbers;
}

void MergeSorts(std::vector<ItemType> &list, int startIndex, int endIndex,
                int &comparisons, int &writes) {

  if (startIndex < endIndex) {
    int mid = (startIndex + endIndex) / 2;

    MergeSorts(list, startIndex, mid, comparisons, writes);
    MergeSorts(list, mid + 1, endIndex, comparisons, writes);

    Merge(list, startIndex, mid, endIndex, comparisons, writes);
  }
}
void MergeSort::sort(std::vector<ItemType> &list) {
  comparisons = 0;
  writes = 0;
  int start = 0;
  int end = list.size() - 1;

  MergeSorts(list, start, end, comparisons, writes);
}