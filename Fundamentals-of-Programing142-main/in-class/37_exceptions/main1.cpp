/*************************************************************************
 *
 * Exercise: Exceptions
 *
 */

#include <fstream>
#include <iostream> // for std::cin and std::cout
#include <stdexcept>
using namespace std;
// function prototypes
// count the number of lines in main.cpp
//    returns a success flag
//    if successful, then lineCount has a number of lines
//    if unsuccessful, then exception has an explanation
int linesInMain();

int main() {
  try {
    int lines = linesInMain();
    std::cout << "main.cpp has " << lines << " lines." << std::endl;

  } catch (runtime_error &exceptionObject) {
    cerr << exceptionObject.what() << endl;
  }
}

int linesInMain() {
  std::ifstream inFS; // Input file stream
  int lineCount = 0;

  inFS.open("main1.cpp");
  if (!inFS.is_open()) {
    throw runtime_error("Unable to open main.cpp!");
  }
  while (!inFS.eof()) {
    std::string line;
    getline(inFS, line);
    if (!inFS.fail()) {
      ++lineCount;
    }
  }
  inFS.close();
  return lineCount;
}
