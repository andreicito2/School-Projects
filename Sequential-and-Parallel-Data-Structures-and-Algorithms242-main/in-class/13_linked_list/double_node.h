#pragma once

class Node {
public:
  int data;
  Node *next;
  Node *previous;

  Node(int initialData) {
    data = initialData;
    next = nullptr;
    previous = nullptr;
  }
};
