/*************************************************************************
 *
 * Exercise: Exceptions
 *
 */

#include <fstream>
#include <iostream> // for std::cin and std::cout
#include <stdexcept>
#include <vector>

class file_not_found_error : public std::runtime_error {
public:
  file_not_found_error(const std::string &what_arg)
      : std::runtime_error(what_arg) {}
};
class not_a_word_error : public std::runtime_error {
public:
  not_a_word_error(const std::string &what_arg)
      : std::runtime_error(what_arg) {}
};
class word_too_long_error : public std::runtime_error {
public:
  word_too_long_error(const std::string &what_arg)
      : std::runtime_error(what_arg) {}
};

// function prototypes
// Get a list of words found in words.txt
//    returns a success flag
//    if successful, then words has a vector of std::string
//    if unsuccessful, then errorCode and message have an explanation
bool readFile(std::vector<std::string> &words, int &errorCode,
              std::string &errorDescription);

int main() {
    try{
  std::vector<std::string> words;
  int errorCode;
  std::string message;
  bool successFlag = readFile(words, errorCode, message);
std::cout << "words.txt has " << words.size() << " words." << std::endl;
  

    }catch(std::runtime_error& exceptionObject){
std::cerr << exceptionObject.what() << std::endl;
    }
}

bool readFile(std::vector<std::string> &words, int &errorCode,
              std::string &errorDescription) {
  std::ifstream inFS; // Input file stream
  errorCode = 0;

  inFS.open("words.txt");
  if (!inFS.is_open()) {
    throw file_not_found_error( "Unable to open words.txt!");
    return false;
  }
  while (!inFS.eof()) {
    std::string line;
    getline(inFS, line);
    if (!inFS.fail() && line.size() > 0) {
      if (isdigit(line.at(0))) {
        //errorCode = 2;
        //errorDescription = "Found a digit!";
        inFS.close();
        throw not_a_word_error( "Found a digit!");
        return false;
      }
      if (line.size() > 20) {
        //errorCode = 3;
       // errorDescription = "Word is too long!";
        inFS.close();
        throw word_too_long_error("Word is too long!");
        return false;
      }
      words.push_back(line);
    }
  }
  inFS.close();
  return true;
}
