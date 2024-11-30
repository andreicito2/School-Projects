/**
 * The following definitions go into file item_type.cpp.
 *
 * Source:     C++ Plus Data Structures 6th Edition
 *             by Nell Dale, Chip Weems, Tim Richards
 */
#include "item_type.h"
#include <iostream>

ItemType::ItemType() { value = 0; }

ItemType::ItemType(int number) { value = number; }

RelationType ItemType::comparedTo(ItemType otherItemType) const {
  if (value < otherItemType.value) {
    return LESS;
  } else if (value > otherItemType.value) {
    return GREATER;
  } else {
    return EQUAL;
  }
}

void ItemType::setValue(int number) { value = number; }

int ItemType::getValue() { return value; }

std::ostream &operator<<(std::ostream &os, const ItemType &item) {
  os << item.value;
  return os;
}
