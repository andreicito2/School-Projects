/**
 * The following definitions go into file item_type.cpp.
 *
 * Source:     C++ Plus Data Structures 6th Edition
 *             by Nell Dale, Chip Weems, Tim Richards
 */
#include "item_type.h"
#include <iostream>

ItemType::ItemType() { value = ' '; }

ItemType::ItemType(int newValue) { value = newValue; }

RelationType ItemType::comparedTo(ItemType otherItemType) const {
  if (value < otherItemType.value) {
    return LESS;
  } else if (value > otherItemType.value) {
    return GREATER;
  } else {
    return EQUAL;
  }
}

void ItemType::setValue(int newValue) { value = newValue; }

char ItemType::getValue() { return value; }

std::ostream &operator<<(std::ostream &os, const ItemType &item) {
  os << item.value;
  return os;
}
