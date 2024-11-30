/**
 * Assignment 7: PriorityQueueType Implementation file
 */

#include "priority_queue_type.h"
#include <cmath>

template <class ItemType>
PriorityQueueType<ItemType>::PriorityQueueType(int max) {
  maxItems = max;
  items.elements = new ItemType[max];
  length = 0;
}

template <class ItemType> void PriorityQueueType<ItemType>::makeEmpty() {
  length = 0;
}

template <class ItemType> PriorityQueueType<ItemType>::~PriorityQueueType() {
  delete[] items.elements;
}

template <class ItemType>
void PriorityQueueType<ItemType>::dequeueIterative(ItemType &item) {
  // Post: element with highest priority has been removed
  //       from the queue; a copy is returned in item.
  if (length == 0)
    throw EmptyPriorityQueue();
  else {
    item = items.elements[0];
    items.elements[0] = items.elements[length - 1];
    length--;
    items.reheapDownIterative(0, length - 1);
  }
}

template <class ItemType>
void PriorityQueueType<ItemType>::dequeue(ItemType &item) {
  // Post: element with highest priority has been removed
  //       from the queue; a copy is returned in item.
  if (length == 0)
    throw EmptyPriorityQueue();
  else {
    item = items.elements[0];
    items.elements[0] = items.elements[length - 1];
    length--;
    items.reheapDown(0, length - 1);
  }
}

template <class ItemType>
void PriorityQueueType<ItemType>::enqueueIterative(ItemType newItem) {
  // Post: newItem is in the queue.
  if (length == maxItems)
    throw FullPriorityQueue();
  else {
    length++;
    items.elements[length - 1] = newItem;
    items.reheapUpIterative(0, length - 1);
  }
}

template <class ItemType>
void PriorityQueueType<ItemType>::enqueue(ItemType newItem) {
  // Post: newItem is in the queue.
  if (length == maxItems)
    throw FullPriorityQueue();
  else {
    length++;
    items.elements[length - 1] = newItem;
    items.reheapUp(0, length - 1);
  }
}
template <class ItemType> bool PriorityQueueType<ItemType>::isFull() const {
  // Post: Returns true if the queue is full; false, otherwise.
  return length == maxItems;
}

template <class ItemType> bool PriorityQueueType<ItemType>::isEmpty() const {
  // Post: Returns true if the queue is empty; false, otherwise.
  return length == 0;
}

template <class ItemType> void PriorityQueueType<ItemType>::printHeap(std::ostream &printStream) const {
  for (int i = 0; i < length; i++) {
    printStream << items.elements[i] << " ";
  }
}
