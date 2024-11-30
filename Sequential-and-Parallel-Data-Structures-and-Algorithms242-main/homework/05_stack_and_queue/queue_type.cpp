/**
 * QueueType implementation file
 */
#include "queue_type.h"

QueueType::QueueType(int max) {
  // Parameterized class constructor
  // Post: maxQue, front, and rear have been initialized.
  //       The array to hold the queue elements has been dynamically
  //       allocated.
  maxQue = max + 1;
  front = maxQue - 1;
  rear = maxQue - 1;
  items = new ItemType[maxQue];
}

QueueType::QueueType() {
  // Default class constructor
  // Post: maxQue, front, and rear have been initialized.
  //       The array to hold the queue elements has been dynamically
  //       allocated.
  maxQue = 501;
  front = maxQue - 1;
  rear = maxQue - 1;
  items = new ItemType[maxQue];
}

QueueType::~QueueType() {
  // Class destructor
  delete[] items;
}

void QueueType::makeEmpty() {
  // Post: front and rear have been reset to the empty state.

  front = maxQue - 1;
  rear = maxQue - 1;
}

bool QueueType::isEmpty() const {
  // Returns true if the queue is empty; false otherwise.
  return (rear == front);
}

bool QueueType::isFull() const {
  // Returns true if the queue is full; false otherwise.
  return ((rear + 1) % maxQue == front);
}

void QueueType::enqueue(ItemType newItem) {
  // Post: If (queue is not full) newItem is at the rear of the queue;
  //       otherwise a FullQueue exception is thrown.
  if (isFull())
    throw FullQueue();
  else {
    rear = (rear + 1) % maxQue;
    items[rear] = newItem;
  }
}

void QueueType::dequeue(ItemType &item) {
  // Post: If (queue is not empty) the front of the queue has been
  //       removed and a copy returned in item;
  //       othersiwe a EmptyQueue exception has been thrown.
  if (isEmpty())
    throw EmptyQueue();
  else {
    front = (front + 1) % maxQue;
    item = items[front];
  }
}

std::ostream &operator<<(std::ostream &os, const QueueType &list) {
  int current = list.front;
  int currentEnd = list.rear;
  if (list.front > list.rear) {
    currentEnd = list.rear + list.maxQue;
  }

  if (list.front == list.rear) {
    os << "List is empty.";
  } else {
    while (current < currentEnd) {
      os << list.items[(current + 1) % list.maxQue];
      current++;
    }
  }

  os << std::endl;
  return os;
}