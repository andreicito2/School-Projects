/**
 * Beginner: Update the program so that it stores strings of user input to a
 * vector until the user enters "Quit"
 */
#include <iostream>
#include <string>
#include <vector>

int main() {
  // Declare variables
  std::vector<std::string> nameList;
  std::string name = "";

  // Collect user input
 
  // YOUR CODE GOES HERE

  // Print results
  std::cout << std::endl << "VIP List" << std::endl;
  for (uint64_t i = 0; i < nameList.size(); i++) {
    std::cout << i + 1 << ". " << nameList.at(i) << std::endl;
  }

  return 0;
}