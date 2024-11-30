/*************************************************************************
 *
 * File Name: sample.cpp
 * Course:    CPTR 142
 *
 */
// ======================================================================
// ====== DO NOT EDIT == DO NOT EDIT == DO NOT EDIT == DO NOT EDIT ======
// ======================================================================

#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> team;
  int size;
  std::cout << "What is the size of your team? ";
  std::cin >> size;
  for (int i = 0; i < size; i++) {
    std::string name;
    std::cout << "Name for player " << i + 1 << "? ";
    std::cin >> name;
    team.push_back(name);
  }

  for (auto name : team) {
    std::cout << name << std::endl;
  }

  return 0;
}
