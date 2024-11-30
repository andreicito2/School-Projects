/**
 * Collect information into two arrays (integer and string).
 * Print out the total for the integer array and the values in the
 * string array.
 */

#include <iostream>

int main() {
  // define variables
  char anws1;
  char anws2;
  char anws3;
  // Prompt for and collect input
  std::cout << "What animal are you?" << std::endl;
  std::cout << " - Are you big? (y/n) ";
  std::cin >> anws1;
  std::cout << " - Are you hairy? (y/n) ";
  std::cin >> anws2;
  std::cout << " - Do you live in the water? (y/n) ";
  std::cin >> anws3;
  std::cout << std::endl;
  // Print the cost of the tickets
  if (anws1 == 'y') {
    // walrus otter whale salmon
    if ((anws2 == 'y') && (anws3 == 'y')) {
      std::cout << "Are you a walrus?" << std::endl;
    }
    if ((anws2 == 'y') && (anws3 == 'n')) {
      std::cout << "Are you a giraffe?" << std::endl;
    }
    if ((anws2 == 'n') && (anws3 == 'y')) {
      std::cout << "Are you a whale?" << std::endl;
    }
    if ((anws2 == 'n') && (anws3 == 'n')) {
      std::cout << "Are you a elephant?" << std::endl;
    }

  } else {
    // giraffe, hyena, elephant, gecko
    if ((anws2 == 'y') && (anws3 == 'y')) {
      std::cout << "Are you a otter?" << std::endl;
    }
    if ((anws2 == 'y') && (anws3 == 'n')) {
      std::cout << "Are you a hyena?" << std::endl;
    }
    if ((anws2 == 'n') && (anws3 == 'y')) {
      std::cout << "Are you a salmon?" << std::endl;
    }
    if ((anws2 == 'n') && (anws3 == 'n')) {
      std::cout << "Are you a gecko?" << std::endl;
    }
  }
  return 0;
}
