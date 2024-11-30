/**
 * Beginner: Use a switch to collect user input.
 */

#include <iomanip>
#include <iostream>

int main() {
  // define your variables below
  int animal;
  std::string picked;

  // Print the menu and get user input
  std::cout << "Pick an animal:" << std::endl;
  std::cout << " 1: Deer" << std::endl;
  std::cout << " 2: Elephant" << std::endl;
  std::cout << " 3: Lion" << std::endl;
  std::cout << " 4: Pig" << std::endl;
  std::cout << " 5: Zebra" << std::endl;
  std::cin >> animal;

  // Use a switch statement to determine user's selection

  // YOUR CODE GOES HERE

  // print out the text
  std::cout << "You picked a " << picked << "." << std::endl;

  return 0;
}
