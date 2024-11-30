/*************************************************************************
 *
 * Objective 4: Collect string variables and print them.
 *
 * File Name: pet.cpp
 * Name:      ?
 * Course:    CPTR 141
 * Due Date:  @@date@@
 *
 */

#include <iostream>
#include <string>
using namespace std;
int main() {
  // define your variables below
  string name;
  string animal;
  // gather user input using std::cin << variableName
  cout << "Enter your pet's name: ";
  cin >> name;
  cout << "Enter type of animal: ";
  cin >> animal;
  // print out the text
  cout << "Your pet's name is " << name << " and is a " << animal << "."
       << endl;
  return 0;
}
