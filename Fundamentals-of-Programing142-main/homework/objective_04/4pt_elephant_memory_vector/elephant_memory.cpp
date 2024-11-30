/*************************************************************************
 *
 * Objective 4: Collect information into two arrays (integer and string).
 *              Print out the total for the integer array and the values in the
 *              string array.
 */

#include <iostream>
#include <vector>

int main() {
  // define variables
  int user_imput;
  std::vector<int> elephantMemory;
  int size;
  // Prompt for and collect input
  do {
    std::cout << "Enter a number: ";
    std::cin >> user_imput;
    if (user_imput >= 0) {
      elephantMemory.push_back(user_imput);
    }

  } while (user_imput >= 0);
  // Print the numbers entered
  std::cout << "The elephant responses with these numbers:" << std::endl;
  size = elephantMemory.size();
  for (int i = 0; i < size; i++) {
    std::cout << elephantMemory.at(i);
    if (i == (size - 1)) {
      std::cout << std::endl;
    } else {

      std::cout << ", ";
    }
  }

  return 0;
}
