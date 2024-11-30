/**
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "lock_up.h"
#include <iostream>
#include <vector>

int main() {
  std::vector<bool> doors = {true, true, false, false, true};
  lock(doors, 3);
  unlock(doors, 4);
  for (uint64_t i = 0; i < doors.size(); i++) {
    std::cout << "Door " << (i + 1) << " is " << (doors.at(i) ? "" : "un")
              << "locked." << std::endl;
  }
  return 0;
}
