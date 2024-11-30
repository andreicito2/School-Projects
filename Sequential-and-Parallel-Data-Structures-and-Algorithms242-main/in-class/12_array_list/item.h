#pragma once

#include <iostream>

enum RelationType { LESS, GREATER, EQUAL };

class Item {
public:
  Item() { data = 0; }
  Item(int initialData) { data = initialData; }
  void setValue(int initialData) { data = initialData; }
  int getValue() { return data; }
  RelationType comparedTo(Item otherItem) const {
    if (data < otherItem.data) {
      return LESS;
    } else if (data > otherItem.data) {
      return GREATER;
    } else {
      return EQUAL;
    }
  }
  friend std::ostream &operator<<(std::ostream &os, const Item &tc);

private:
  int data;
};

std::ostream &operator<<(std::ostream &os, const Item &item) {
  os << item.data;
  return os;
}
