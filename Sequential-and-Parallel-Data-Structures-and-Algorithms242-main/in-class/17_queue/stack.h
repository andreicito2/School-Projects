#pragma once

#include "singly_linked_list.h"
#include <iostream>

class Stack {
private:
  LinkedList linkedList;

public:
  Stack() {}

  void Push(int newData) {
    // Create a new node and prepend
    Node *newNode = new Node(newData);
    linkedList.prepend(newNode);
  }

  int Pop() {
    // Copy list head's data
    int poppedItem = linkedList.getHeadData();

    // Remove list head
    linkedList.removeAfter(nullptr);

    // Return popped item
    return poppedItem;
  }

  void Print(std::ostream &printStream) { linkedList.printList(printStream); }
};
