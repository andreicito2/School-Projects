#include <iostream>
#include <string>

int main() {
  std::string homeworkNames[5] = {"Variables", "If-Else", "Loops", "Vectors",
                                  "Arrays"};
  int pointsPossible[5] = {25, 35, 15, 20, 30}; 
  int numStudents = 40;

  for (int i = 0; i < 5; i++) {
    std::cout << homeworkNames[i] << ": " << pointsPossible[i] << std::endl;
  }
  std::cout << pointsPossible[5] << std::endl;
  return 0;
}