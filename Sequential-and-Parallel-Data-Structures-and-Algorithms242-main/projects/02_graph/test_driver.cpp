/**
 * Project 2: Student test driver
 */
#include "menu.h"
#include <iostream>

int main() {
  std::cout << "Type 'Menu' to see all the display menu." << std::endl;
  menu(std::cin, std::cout, "Student Test", true);
}
