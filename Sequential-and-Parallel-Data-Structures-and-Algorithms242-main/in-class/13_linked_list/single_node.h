#pragma once

class Node {
public:
  int data;
  Node *next;

  Node(int initialData) {
    data = initialData;
    next = nullptr;
  }
};
