/*************************************************************************
 *
 * Class: ShoppingList
 *
 * DO NOT EDIT FILE
 * Changes will not be considered during grading.
 */
#pragma once
#include <string>
#include <vector>

class ShoppingList {
public:
  void addItem(std::string item);
  void removeItem(std::string item);
  std::vector<std::string> getList();

private:
  std::vector<std::string> list;
};
