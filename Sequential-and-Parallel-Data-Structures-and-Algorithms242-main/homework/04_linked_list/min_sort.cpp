/**
 * Implement a two recursive functions on a linked unsorted list.
 */
#include "min_sort.h"
#include "item_type.h"
#include "unsorted.h"

NodeType *MinLoc(NodeType *list, NodeType *&minPtr) {
  // TODO Add recursive MinLoc.
  // Your code goes here.
  if (list == nullptr) {
    return minPtr;
  } else if ((list->info).ComparedTo(minPtr->info) == LESS) {
    minPtr = list;
    MinLoc(list->next, minPtr);
  } else if ((list->info).ComparedTo(minPtr->info) != LESS) {
    MinLoc(list->next, minPtr);
  }
  return minPtr;
}



void Sort(NodeType *list) {
  // TODO Add recursive sort method that uses MinLoc.
  // Your code goes here.
  if (list == nullptr) {
  } else {
    NodeType *minPtr = list;

    MinLoc(list, minPtr);
    ItemType temp = list->info;
    list->info = minPtr->info;
    minPtr->info = temp;
    Sort(list->next);
  }
}
