/**
 * Class: ShoppingList
 *
 * DO NOT EDIT FILE
 * Changes will not be considered during grading.
 */
#include "shopping_list.h"
#include <algorithm>
#include <string>
#include <vector>

void ShoppingList::addItem(std::string item) { list.push_back(item); }

void ShoppingList::removeItem(std::string item) {
  auto location = std::find(list.begin(), list.end(), item);
  if (location != list.end()) {
    list.erase(location);
  }
}

std::vector<std::string> ShoppingList::getList() { return list; }
