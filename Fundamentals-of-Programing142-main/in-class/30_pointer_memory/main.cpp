/*************************************************************************
 *
 * File Name: main.cpp
 * Course:    CPTR 142
 *
 */
// ======================================================================
// ====== DO NOT EDIT == DO NOT EDIT == DO NOT EDIT == DO NOT EDIT ======
// ======================================================================

#include "team.h"
#include <iostream>
#include <string>

int main() {
  Team team;

  int size;
  std::cout << "What is the size of your team? ";
  std::cin >> size;

  std::string name;
  for (int i = 0; i < size; i++) {
    std::cout << "Name for player " << i + 1 << "? ";
    std::cin >> name;
    team.addPlayerNamed(name);
  }

  team.displayRoster();

  return 0;
}
