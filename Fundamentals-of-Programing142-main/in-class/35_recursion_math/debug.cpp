/**
 * Exercise: Recursive Search
 */

#include <algorithm> // sort()
#include <cstdlib>   // rand()
#include <iostream>  // for std::cin and std::cout
#include <vector>
using namespace std;

// function prototype
// TODO: add indent string to end of function prototype
int mySearch(vector<int> myNums, int left, int right, int target, string indent
);

int main() {
  srand(0);
  std::vector<int> numbers;
  for (int i = 0; i < 10; ++i) {
    numbers.push_back(rand() % 100 + 1);
  }
  sort(numbers.begin(), numbers.end());
  for (auto j : numbers) {
    std::cout << j << " ";
  }
  std::cout << std::endl << "What number shall I search for? ";
  int goal;
  std::cin >> goal;

  // TODO: add indent to initial function call
  int index = mySearch(numbers, 0, numbers.size() - 1, goal, " ");

  std::cout << "Found at index " << index << std::endl;
  return 0;
}

// TODO: add indent string to end of function header
int mySearch(vector<int> myNums, int left, int right, int target, string indent) {
  // TODO: add output showing boundaries
  cout << indent << "left: " << left << " Right: " << right << endl;
  int midPoint = (left + right) / 2;
  int midValue = myNums.at(midPoint);
  if (midValue == target) { //  equal
    // TODO: add output describing what was found
    cout << indent << "found at " << midValue << endl;
    return midPoint;
  } else if (right <= left) { //  (empty search are) base case
    // TODO: add output describing what was found
    cout << indent << "not found" << endl;
    return -1;
  } else if (midValue < target) { //  right side
    // TODO: add output describing what was found
    // TODO: add additional indent to recursive call
    return mySearch(myNums, midPoint + 1, right, target, indent + "  ");
  } else { //  left size
    // TODO: add output describing what was found
    // TODO: add additional indent to recursive call
    return mySearch(myNums, left, midPoint - 1, target, indent + "  ");
  }
}
