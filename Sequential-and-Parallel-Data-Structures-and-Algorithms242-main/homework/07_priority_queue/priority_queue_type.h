/**
 * Assignment 7: PriorityQueueType header file
 */
#pragma once

#include "heap.h"

// Definition of class PriorityQueueType, which represents the Priority Queue
// ADT
class FullPriorityQueue {};
class EmptyPriorityQueue {};

template <class ItemType> class PriorityQueueType {
public:
  PriorityQueueType(int); // parameterized class constructor
  ~PriorityQueueType();   // class destructor

  void makeEmpty();
  // Function: Initializes the queue to an empty state.
  // Post: Queue is empty.

  bool isEmpty() const;
  // Function: Determines whether the queue is empty.
  // Post: Function value = (queue is empty)

  bool isFull() const;
  // Function: Determines whether the queue is full.
  // Post: Function value = (queue is full)

  void enqueueIterative(ItemType newItem);
  void enqueue(ItemType newItem);
  // Function: Adds newItem to the rear of the queue.
  // Post: if (the priority queue is full) exception FullPriorityQueue is
  // thrown;
  //       else newItem is in the queue.

  void dequeueIterative(ItemType &item);
  void dequeue(ItemType &item);
  // Function: Removes element with highest priority from the queue
  // and returns it in item.
  // Post: If (the priority queue is empty) exception EmptyPriorityQueue is
  // thrown;
  //       else highest priority element has been removed from queue.
  //       item is a copy of removed element.

  void printHeap(std::ostream& printStream) const;

private:
  int length;
  HeapType<ItemType> items;
  int maxItems;
};

#include "priority_queue_type.tpp"