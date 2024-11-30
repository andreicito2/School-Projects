#include <iostream>
#include <string>
#include <vector>

int main() {

  std::vector<int> quizScores = {8, 6};
  std::vector<std::string> profNames(4);
    std::string name_1;
    std::string name_2;
  profNames.at(0) = "Carman";
  profNames.at(1) = "Foster";
  profNames.at(2) = "Duncan";
  profNames.at(3) = "Adomot";
name_1 = profNames.at(0);
name_2 = profNames.at(1);
profNames.at(0) = name_2;


  std::cout << quizScores.size() << std::endl;
  std::cout << profNames.at(1) << std::endl;

std::cout << "there are " << profNames.size() << " porfessors";
  return 0;
}