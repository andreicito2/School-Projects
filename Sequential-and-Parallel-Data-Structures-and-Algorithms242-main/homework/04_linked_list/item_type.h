/****************************************************************************
 *
 * File Name:  ItemType.h
 * Course:     CPTR 242
 * Source:     C++ Plus Data Structures 6th Edition
 *             by Nell Dale, Chip Weems, Tim Richards
 *
 */
// The following declarations and definitions go into file
// ItemType.h.
#pragma once

#include <fstream>
const int MAX_ITEMS = 5;
enum RelationType { LESS, GREATER, EQUAL };

class ItemType {
public:
  ItemType();
  RelationType ComparedTo(ItemType) const;
  void Print(std::ostream &) const;
  void Initialize(int number);

private:
  int value;
};
