#include "singly_linked_list.h"
#include <iostream>

int main() {
  LinkedList numList;
  Node *nodeA = new Node(66);
  Node *nodeB = new Node(99);
  Node *nodeC = new Node(44);
  Node *nodeD = new Node(95);
  Node *nodeE = new Node(42);
  Node *nodeF = new Node(17);

  numList.append(nodeB); // Add 99
  numList.append(nodeC); // Add 44, make the tail
  numList.append(nodeE); // Add 42, make the tail

  numList.prepend(nodeA); // Add 66, make the head

  numList.insertAfter(nodeC, nodeD); // Insert 95 after 44
  numList.insertAfter(nodeE, nodeF); // Insert 17 after tail (42)

  // Output list
  std::cout << "List after adding nodes: ";
  numList.printList(std::cout);

  // Remove the tail node, then the head node
  numList.removeAfter(nodeE);
  numList.removeAfter(nullptr);

  // Output final list
  std::cout << "List after removing nodes: ";
  numList.printList(std::cout);

  // LinkedList destructor frees remaining nodes
}