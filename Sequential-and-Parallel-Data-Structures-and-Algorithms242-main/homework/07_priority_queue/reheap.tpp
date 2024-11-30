/**
 * Assignment 7: Implement reheapDownIterative and reheapUpIterative functions
 * using iteration.
 */
#include "heap.h"
#include <iostream>

template <class ItemType>
void HeapType<ItemType>::reheapDownIterative(int root, int bottom) {
  // Post: Heap property is restored.
  // Your code goes here.
  int maxChild;
  int rightChild;
  int leftChild;

  while (leftChild <= bottom) {

    leftChild = root * 2 + 1;
    rightChild = root * 2 + 2;

    if (leftChild <= bottom) {
      if (elements[leftChild].getValue() <= elements[rightChild].getValue()) {
        maxChild = rightChild;
      } else {
        maxChild = leftChild;
      }

      if (elements[root].getValue() < elements[maxChild].getValue()) {
        swap(elements[root], elements[maxChild]);
        root = maxChild;
        if ((root * 2 + 1) >= bottom) {
          break;
        } else {
          leftChild = root * 2 + 1;
          rightChild = root * 2 + 2;
        }
      }
    }
  }
}

template <class ItemType>
void HeapType<ItemType>::reheapUpIterative(int root, int bottom) {
  // Post: Heap property is restored.
  // Your code goes here.
  int parent;
  std::cout << "test 1" << std::endl;
  while (bottom > root) {
    std::cout << "test 2" << std::endl;
    parent = (bottom - 1) / 2;
    std::cout << "test 3" << std::endl;
    if (elements[parent].getValue() < elements[bottom].getValue()) {
      std::cout << "test 4" << std::endl;
      swap(elements[parent], elements[bottom]);
      std::cout << "test 5" << std::endl;
      bottom = parent;
      std::cout << "test 6" << std::endl;
    } else {
      break;
    }
  }
}
