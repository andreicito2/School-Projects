/**
 * Exercise: Recursive Search
 */

#include <algorithm> // sort()
#include <cstdlib>   // rand()
#include <iostream>  // for std::cin and std::cout
#include <vector>

// function prototype
int mySearch(std::vector<int> myNums, int left, int right, int target);

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

  int index = mySearch(numbers, 0, numbers.size() - 1, goal);

  std::cout << "Found at index " << index << std::endl;
  return 0;
}

int mySearch(std::vector<int> myNums, int left, int right, int target) {

  // TODO: WRITE CODE HERE THAT WILL CHECK THE VECTOR FOR A NUMBER //
int midval;
midval = (left + right)/2;
if(myNums[midval]==target ){
    return midval;
}else {
if(myNums[midval] > target){
 mySearch(myNums, midval , right, target);
}else{
    mySearch(myNums, left, midval +1 , target);

}
}


  return -1; // number not found
}
