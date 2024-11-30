/*************************************************************************
 *
 * Objective 4: Collect character input and alter the printed value.
 *
 * File Name: lowercase.cpp
 * Name:      ?
 * Course:    CPTR 141
 * Due Date:
 *
 */

#include <iomanip>
#include <iostream>
#include <ostream>
using namespace std;
int main() {
  // define your variables below
  char letter;
  // gather user input using std::cin << variableName
  cout << "Enter a capital letter: ";
  cin >> letter;
  // print out the lowercase letter
  letter += 32;
  cout << "The lowercase letter is " << letter << '.' << endl;
  return 0;
}
