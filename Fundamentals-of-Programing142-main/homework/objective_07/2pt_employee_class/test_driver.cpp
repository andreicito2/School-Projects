/**
 * Implement your function in the file guessing_game.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "employee.h"
#include <iostream>

int main() {
  Employee me = Employee("Zookeeper Bob", 24.50);
  std::cout << me.getName() << " will be paid $" << me.getPay(80)
            << " for 80 hours of work." << std::endl;
    
}
