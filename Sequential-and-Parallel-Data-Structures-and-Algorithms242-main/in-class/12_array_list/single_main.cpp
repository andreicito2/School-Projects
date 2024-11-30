#include "singly_array_list.h"
#include "item.h"
#include <iostream>

int main() {
  ArrayList numList;
  Item *itemA = new Item(66);
  Item *itemB = new Item(99);
  Item *itemC = new Item(44);
  Item *itemD = new Item(95);
  Item *itemE = new Item(42);
  Item *itemF = new Item(17);

  numList.append(itemB); // Add 99
  numList.append(itemC); // Add 44, make the tail
  numList.append(itemE); // Add 42, make the tail

  numList.prepend(itemA); // Add 66, make the head

  // Output list
  std::cout << "List after adding items: ";
  numList.printList(std::cout);

  // Remove the tail item, then the head item
  numList.remove(itemE);
  numList.remove(itemA);

  // Output final list
  std::cout << "List after removing items: ";
  numList.printList(std::cout);

  // LinkedList destructor frees remaining items
}