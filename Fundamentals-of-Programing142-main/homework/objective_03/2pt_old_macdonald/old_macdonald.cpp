/*************************************************************************
 *
 * hw01: A mad-libs like Old MacDonald Game
 *
 * File Name: macdonald.cpp
 * Name:      ?
 * Course:    CPTR 141
 * Due Date:  @@date@@
 *
 */

#include <iostream>
#include <string>
int main() {
  // define your variables below
  std::string adjective;
  std::string noun;
  std::string animal;
  std::string noise;
  // gather user input using std::cin << variableName
  std::cout << "Enter an adjective: ";
  std::cin >> adjective;
  std::cout << "Enter a noun: ";
  std::cin >> noun;
  std::cout << "Enter an animal: ";
  std::cin >> animal;
  std::cout << "Enter a sound: ";
  std::cin >> noise;
  // print out the "song"

  std::cout << std::endl
            << adjective << " Macdonald had a " << noun << ", E-I-E-I-O"
            << std::endl;
  std::cout << "and on that " << noun << " he had a " << animal << ", E-I-E-I-O"
            << std::endl;
  std::cout << "with a " << noise << " " << noise << " here" << std::endl;
  std::cout << "and a " << noise << " " << noise << " there," << std::endl;
  std::cout << "here a " << noise << ", there a " << noise << std::endl;
  std::cout << "everywhere a " << noise << " " << noise << "," << std::endl;
  std::cout << adjective << " Macdonald had a " << noun << ", E-I-E-I-O."
            << std::endl;

  return 0;
}
