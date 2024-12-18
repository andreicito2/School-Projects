#pragma once

#include "single_node.h"
#include <iostream>

class LinkedList {
private:
  Node *head;
  Node *tail;

public:
  LinkedList() {
    head = nullptr;
    tail = nullptr;
  }

  virtual ~LinkedList() {
    Node *currentNode = head;
    while (currentNode) {
      Node *toBeDeleted = currentNode;
      currentNode = currentNode->next;
      delete toBeDeleted;
    }
  }

  void append(Node *newNode) {
    if (head == nullptr) {
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
  }

  void prepend(Node *newNode) {
    if (head == nullptr) {
      head = newNode;
      tail = newNode;
    } else {
      newNode->next = head;
      head = newNode;
    }
  }

  void printList(std::ostream &printStream,
                 const std::string &separator = ", ") {
    Node *node = head;
    if (node) {
      // Head node is not preceded by separator
      printStream << node->data;
      node = node->next;
    }
    while (node) {
      printStream << separator << node->data;
      node = node->next;
    }
    printStream << std::endl;
  }

  void insertAfter(Node *currentNode, Node *newNode) {
    if (head == nullptr) {
      head = newNode;
      tail = newNode;
    } else if (currentNode == tail) {
      tail->next = newNode;
      tail = newNode;
    } else {
      newNode->next = currentNode->next;
      currentNode->next = newNode;
    }
  }

  void removeAfter(Node *currentNode) {
    if (currentNode == nullptr && head) {
      // Special case: remove head
      Node *nodeBeingRemoved = head;
      head = head->next;
      delete nodeBeingRemoved;

      if (head == nullptr) {
        // Last item was removed
        tail = nullptr;
      }
    } else if (currentNode->next) {
      Node *nodeBeingRemoved = currentNode->next;
      Node *succeedingNode = currentNode->next->next;
      currentNode->next = succeedingNode;
      delete nodeBeingRemoved;
      if (succeedingNode == nullptr) {
        // Remove tail
        tail = currentNode;
      }
    }
  }
};
