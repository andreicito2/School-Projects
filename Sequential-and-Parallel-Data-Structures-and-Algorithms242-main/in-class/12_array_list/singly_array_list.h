#pragma once

#include "item.h"
#include <iostream>

const int MAX_ITEMS = 10;

class ArrayList {
private:
  int length;
  Item info[MAX_ITEMS];
  int currentPos;

public:
  ArrayList() { length = 0; }

  void append(Item *newItem) {
    info[length] = Item(newItem->getValue());
    length++;
  }

  void prepend(Item *newItem) {
    for (int i = length; i > 0; i--) {
      info[i] = info[i - 1];
    }
    info[0] = Item(newItem->getValue());
    length++;
  }

  void printList(std::ostream &printStream,
                 const std::string &separator = ", ") {
    if (length > 0) {
      printStream << info[0];
    }
    for (int i = 1; i < length; i++) {
      printStream << separator << info[i];
    }
    printStream << std::endl;
  }

  void remove(Item *currentItem) {
    for (int location = 0; location < length; location++) {
      if (currentItem->comparedTo(info[location]) == EQUAL) {
        info[location] = info[length - 1];
        length--;
        break;
      }
    }
  }
};
