/**
 * StackType implementation file
 */
#include "stack_type.h"
#include "item_type.h"
#include "queue_type.h"
#include <iostream>

StackType::StackType() {
  // Your code goes here.
}

bool StackType::isEmpty() const {
  // Your code goes here.
  if (stackQueue.isEmpty() && tmpQueue.isEmpty()) {
    return true;
  } else {
    return false;
  }
}

bool StackType::isFull() const {
  // Your code goes here.
  if (stackQueue.isFull() && tmpQueue.isFull()) {
    return true;
  } else {
    return false;
  }
}

void StackType::makeEmpty() {
  // Your code goes here.
  stackQueue.makeEmpty();
  tmpQueue.makeEmpty();
}

void StackType::push(ItemType newItem) {
  if (isFull())
    throw FullStack();
  // Your code goes here.
  ItemType item;
  if (stackQueue.isEmpty()) {
    stackQueue.enqueue(newItem);
    // std::cout << "test 1" << std::endl;
  } else {
    tmpQueue.enqueue(newItem);
    // std::cout << "test 3" << std::endl;
    while (stackQueue.isEmpty() != true) {
      // std::cout << "test 2" << std::endl;
      stackQueue.dequeue(item);
      tmpQueue.enqueue(item);
    }

    while (tmpQueue.isEmpty() != true) {
      tmpQueue.dequeue(item);
      stackQueue.enqueue(item);
      // std::cout << "test 4" << std::endl;
    }
  }

  //   tmpQueue.enqueue(newItem);
  //   tmpQueue.dequeue(item);
  //   std::cout << item << std::endl;
  //   stackQueue.enqueue(item);
}

void StackType::pop() {
  if (isEmpty())
    throw EmptyStack();
  // Your code goes here.
  ItemType item;
  stackQueue.dequeue(item);
}

ItemType StackType::top() {
  if (isEmpty())
    throw EmptyStack();
  // Your code goes here.
  ItemType item;
  stackQueue.dequeue(item);
  push(item);
  return item;
}

std::ostream &operator<<(std::ostream &os, const StackType &list) {
  // Changes may be required based on implementation
  os << list.stackQueue;
  return os;
}