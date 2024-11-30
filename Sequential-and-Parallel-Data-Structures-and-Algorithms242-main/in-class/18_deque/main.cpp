#include "deque.h"
#include <iostream>

int main() {
  Deque numList;

  numList.pushBack(99); // Add 99
  numList.pushBack(44); // Add 44, make the tail
  numList.pushBack(42); // Add 42, make the tail

  numList.pushFront(66); // Add 66, make the head
  numList.pushFront(95); // Add 95, make the head
  numList.pushFront(17); // Add 17, make the head

  // Output list
  std::cout << "List after adding nodes: ";
  numList.print(std::cout);

  // Remove the tail node, then the head node
  std::cout << "Pop front: " << numList.popFront() << std::endl;
  std::cout << "Pop back: " << numList.popBack() << std::endl;

  // New front and tail nodes
  std::cout << "Peek front: " << numList.peekFront() << std::endl;
  std::cout << "Peek back: " << numList.peekBack() << std::endl;

  // Output final list
  std::cout << "List after removing nodes: ";
  numList.print(std::cout);

  // LinkedList destructor frees remaining nodes
}