/**
 * The following declarations and definitions go into file item_type.h
 *
 * Source:     C++ Plus Data Structures 6th Edition
 *             by Nell Dale, Chip Weems, Tim Richards
 */
#pragma once
#include <iostream>

enum RelationType { LESS, GREATER, EQUAL };

class ItemType {
public:
  ItemType();
  ItemType(int value);
  RelationType comparedTo(ItemType) const;
  int getValue();
  void setValue(int number);
  friend std::ostream &operator<<(std::ostream &os, const ItemType &tc);

private:
  int value;
};
