/**
 * QueueType implementation file
 */
#pragma once
#include "item_type.h"

class FullQueue {};

class EmptyQueue {};

class QueueType {
public:
  QueueType();
  // Class constructor.
  // Because there is a default constructor, the precondition
  // that the queue has been initialized is omitted.
  QueueType(int max);
  // Parameterized class constructor.
  ~QueueType();
  // Class destructor.
  void makeEmpty();
  // Function: Initializes the queue to an empty state.
  // Post: Queue is empty.
  bool isEmpty() const;
  // Function: Determines whether the queue is empty.
  // Post: Function value = (queue is empty)
  bool isFull() const;
  // Function: Determines whether the queue is full.
  // Post: Function value = (queue is full)
  void enqueue(ItemType newItem);
  // Function: Adds newItem to the rear of the queue.
  // Post: If (queue is full) FullQueue exception is thrown
  //       else newItem is at rear of queue.
  void dequeue(ItemType &item);
  // Function: Removes front item from the queue and returns it in item.
  // Post: If (queue is empty) EmptyQueue exception is thrown
  //       and item is undefined
  //       else front element has been removed from queue and
  //       item is a copy of removed element.

  friend std::ostream &operator<<(std::ostream &, const QueueType &);

private:
  int front;
  int rear;
  ItemType *items;
  int maxQue;
};
