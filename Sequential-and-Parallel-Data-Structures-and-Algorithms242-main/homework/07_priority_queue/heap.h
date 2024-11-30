/**
 * Assignment 7: Heap header file
 */
#pragma once
#include "item_type.h"

template <class ItemType> void swap(ItemType &one, ItemType &two);

template <class ItemType>
// Assumes ItemType is either a built-in simple type or a class
// with overloaded relational operators.
struct HeapType {
  void reheapDown(int root, int bottom);
  void reheapUp(int root, int bottom);
  void reheapDownIterative(int root, int bottom);
  void reheapUpIterative(int root, int bottom);
  ItemType *elements; // Array to be allocated dynamically
  int numElements;
};

template <class ItemType> void swap(ItemType &one, ItemType &two) {
  ItemType temp;
  temp = one;
  one = two;
  two = temp;
}

// Post: Heap property is restored.
template <class ItemType>
void HeapType<ItemType>::reheapUp(int root, int bottom) {
  int parent;

  if (bottom > root) {
    parent = (bottom - 1) / 2;
    if (elements[parent].getValue() < elements[bottom].getValue()) {
      swap(elements[parent], elements[bottom]);
      reheapUp(root, parent);
    }
  }
}

// Post: Heap property is restored.
template <class ItemType>
void HeapType<ItemType>::reheapDown(int root, int bottom) {
  int maxChild;
  int rightChild;
  int leftChild;

  leftChild = root * 2 + 1;
  rightChild = root * 2 + 2;
  if (leftChild <= bottom) {
    if (leftChild == bottom) {
      maxChild = leftChild;
    } else {
      if (elements[leftChild].getValue() <= elements[rightChild].getValue()) {
        maxChild = rightChild;
      } else {
        maxChild = leftChild;
      }
    }
    if (elements[root].getValue() < elements[maxChild].getValue()) {
      swap(elements[root], elements[maxChild]);
      reheapDown(maxChild, bottom);
    }
  }
}

#include "reheap.tpp"