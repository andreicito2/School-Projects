/**
 * StackType header file
 */
#pragma once

#include "item_type.h"
#include "queue_type.h"

//   The user of this file must provide a file "ItemType.h" that defines:
//       ItemType : the class definition of the objects on the stack.

// Exception class thrown by Push when stack is full.
class FullStack {};

// Exception class thrown by Pop and Top when stack is empty.
class EmptyStack {};

class StackType {
public:
  StackType();
  // Class constructor.
  bool isFull() const;
  // Function: Determines whether the stack is full.
  // Pre:  Stack has been initialized.
  // Post: Function value = (stack is full)
  bool isEmpty() const;
  // Function: Determines whether the stack is empty.
  // Pre:  Stack has been initialized.
  // Post: Function value = (stack is empty)
  void makeEmpty();
  // Function: Initializes the stack to an empty state.
  // Post: Stack is empty.
  void push(ItemType item);
  // Function: Adds newItem to the top of the stack.
  // Pre:  Stack has been initialized.
  // Post: If (stack is full), FullStack exception is thrown;
  //     otherwise, newItem is at the top of the stack.
  void pop();
  // Function: Removes top item from the stack.
  // Pre:  Stack has been initialized.
  // Post: If (stack is empty), EmptyStack exception is thrown;
  //     otherwise, top element has been removed from stack.
  ItemType top();
  // Function: Returns a copy of top item on the stack.
  // Pre:  Stack has been initialized.
  // Post: If (stack is empty), EmptyStack exception is thrown;
  //     otherwise, top element has been removed from stack.
  friend std::ostream &operator<<(std::ostream &, const StackType &);
  // Function: Prints the items of the stack.
  // Pre:  Stack has been initialized.
  // Post: If (stack is empty), prints "List is empty."
  //     otherwise, the stack is printed start with the top down to the bottom.
private:
  QueueType stackQueue;
  QueueType tmpQueue;
};
