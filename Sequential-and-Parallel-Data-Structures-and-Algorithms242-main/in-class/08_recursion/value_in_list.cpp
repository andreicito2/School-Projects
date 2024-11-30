/**
 * In-class activity for recursion.
 */
#include <iostream>
#include <vector>

bool valueInList(std::vector<int> &list, int value, int startIndex) {
  // Add your code here
}

int main() {
  std::vector<int> list{20, 40, 50, 60, 70, 100, 400};

  if (valueInList(list, 61, 0)) {
    std::cout << "Found in list" << std::endl;
  } else {
    std::cout << "Not found in list" << std::endl;
  }

  return 0;
}