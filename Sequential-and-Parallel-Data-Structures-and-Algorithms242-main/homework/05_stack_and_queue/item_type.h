/**
 * The following declarations and definitions go into file item_type.h
 *
 * Source:     C++ Plus Data Structures 6th Edition
 *             by Nell Dale, Chip Weems, Tim Richards
 */
#pragma once
#include <iostream>

// This code was added by Bradon Ladd to fit Homework 5
const int MAX_ITEMS = 5;

enum RelationType { LESS, GREATER, EQUAL };

class ItemType {
public:
  ItemType();
  ItemType(char newValue);
  RelationType comparedTo(ItemType) const;
  char getValue();
  void setValue(char newValue);
  friend std::ostream &operator<<(std::ostream &os, const ItemType &tc);

private:
  char value;
};
