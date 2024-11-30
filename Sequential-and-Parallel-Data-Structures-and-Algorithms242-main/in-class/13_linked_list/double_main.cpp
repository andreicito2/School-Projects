#include "doubly_linked_list.h"
#include <iostream>

int main() {
  LinkedList numList;
  Node *nodeA = new Node(14);
  Node *nodeB = new Node(2);
  Node *nodeC = new Node(20);
  Node *nodeD = new Node(31);
  Node *nodeE = new Node(16);
  Node *nodeF = new Node(55);

  numList.append(nodeA); // Add 14
  numList.append(nodeB); // Add 2, make the tail
  numList.append(nodeC); // Add 20, make the tail

  numList.prepend(nodeD); // Add 31, make the head

  numList.insertAfter(nodeB, nodeE); // Insert 2 after 16
  numList.insertAfter(nodeC,
                      nodeF); // Insert 55 after tail, 55 becomes new tail

  // Output list
  std::cout << "List after adding nodes: ";
  numList.printList(std::cout);

  // Remove the tail node, then the head node
  numList.remove(nodeF);
  numList.remove(nodeD);

  // Output final list
  std::cout << "List after removing nodes: ";
  numList.printList(std::cout);

  // LinkedList destructor frees remaining nodes
}