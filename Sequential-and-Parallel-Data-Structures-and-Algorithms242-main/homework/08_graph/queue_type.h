/**
 * Assignment 8: QueueType implementation
 */
#pragma once

#include <new>

// Header file for Queue ADT.
class FullQueue {};

class EmptyQueue {};

template <class ItemType> struct NodeType;

template <class ItemType> class QueueType {
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
private:
  NodeType<ItemType> *front;
  NodeType<ItemType> *rear;
};

template <class ItemType> struct NodeType {
  ItemType info;
  NodeType *next;
};

// Post:  front and rear are set to nullptr.
template <class ItemType> QueueType<ItemType>::QueueType() {
  front = nullptr;
  rear = nullptr;
}

// Post: Queue is empty; all elements have been deallocated.
template <class ItemType> void QueueType<ItemType>::makeEmpty() {
  NodeType<ItemType> *tempPtr;

  while (front != nullptr) {
    tempPtr = front;
    front = front->next;
    delete tempPtr;
  }
  rear = nullptr;
}

// Class destructor.
template <class ItemType> QueueType<ItemType>::~QueueType() { makeEmpty(); }

// Returns true if there is no room for another ItemType
//  on the free store; false otherwise.
template <class ItemType> bool QueueType<ItemType>::isFull() const {
  NodeType<ItemType> *location;
  try {
    location = new NodeType<ItemType>;
    delete location;
    return false;
  } catch (std::bad_alloc const &exception) {
    return true;
  }
}

// Returns true if there are no elements on the queue; false otherwise.
template <class ItemType> bool QueueType<ItemType>::isEmpty() const {
  return (front == nullptr);
}

// Adds newItem to the rear of the queue.
// Pre:  Queue has been initialized.
// Post: If (queue is not full) newItem is at the rear of the queue;
//       otherwise a FullQueue exception is thrown.
template <class ItemType> void QueueType<ItemType>::enqueue(ItemType newItem) {
  if (isFull()) {
    throw FullQueue();
  } else {
    NodeType<ItemType> *newNode;

    newNode = new NodeType<ItemType>;
    newNode->info = newItem;
    newNode->next = nullptr;
    if (rear == nullptr)
      front = newNode;
    else
      rear->next = newNode;
    rear = newNode;
  }
}

// Removes front item from the queue and returns it in item.
// Pre:  Queue has been initialized and is not empty.
// Post: If (queue is not empty) the front of the queue has been
//       removed and a copy returned in item;
//       othersiwe a EmptyQueue exception has been thrown.
template <class ItemType> void QueueType<ItemType>::dequeue(ItemType &item) {
  if (isEmpty()) {
    throw EmptyQueue();
  } else {
    NodeType<ItemType> *tempPtr;

    tempPtr = front;
    item = front->info;
    front = front->next;
    if (front == nullptr) {
      rear = nullptr;
    }
    delete tempPtr;
  }
}
