#pragma once

#include "doubly_linked_list.h"

class Deque {
private:
  LinkedList linkedList;

public:
  Deque() {}

  void pushFront(int newData) {
    // Your code goes here.
    Node *newNode = new Node(newData);
    linkedList.prepend(newNode);
  }

  void pushBack(int newData) {
    // Your code goes here.
    Node *newNode = new Node(newData);
    // newNode->data = newData;
    linkedList.append(newNode);
  }

  int popFront() {
    // Your code goes here.
    Node *temp = linkedList.getHead();
    int front = temp->data;
    linkedList.remove(linkedList.getHead());
    return front;
  }

  int popBack() {
    // Your code goes here.
    Node *temp = linkedList.getTail();
    int back = temp->data;
    linkedList.remove(linkedList.getTail());
    return back;
  }

  int peekFront() {
    // Your code goes here.
    Node *temp = linkedList.getHead();
    return temp->data;
  }

  int peekBack() {
    // Your code goes here.
    return linkedList.getTail()->data;
  }

  void print(std::ostream &printStream) { linkedList.printList(printStream); }
};
