#include <iostream>
#include <vector>

int main() {

  std::vector<int> myVec = {25, 12, 73, 19, 42};

  // First set of commands
  myVec.pop_back();
  myVec.insert(myVec.begin() + 2, 55);
  myVec.erase(myVec.begin() + 1);

  // Second set of commands
  //   myVec.resize(7);
  //   myVec.at(5) = 31;
  //   myVec.insert(myVec.end()-3,90);
  //   myVec.push_back(27);

  // print out final fector
  for (int i = 0; i < myVec.size(); i++) {
    std::cout << myVec.at(i) << " ";
  }
  std::cout << std::endl;

  return 0;
}