#pragma once

#include "singly_linked_list.h"

class Queue {
private:
  LinkedList linkedList;

public:
  Queue() {}

  void Enqueue(int newData) {
    // Create a new node
    Node *newNode = new Node(newData);

    // Insert as list tail (end of queue)
    linkedList.append(newNode);
  }

  int Dequeue() {
    // Copy list head's data
    int dequeuedItem = linkedList.getHeadData();

    // Remove list head
    linkedList.removeAfter(nullptr);

    // Return dequeued item
    return dequeuedItem;
  }

  void Print(std::ostream &printStream) { linkedList.printList(printStream); }
};
