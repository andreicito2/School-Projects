/*************************************************************************
 *
 * In-Class Exercise:  Allows the user to pick a type of problem and then
 *                     displays a random problem of that type, prompting
 *                     the user for an answer and giving feedback on it
 *
 * File Name: drill.cpp
 * Course:    CPTR 142
 */

#include <ctime>    // form time command to use for random seed
#include <iomanip>  // for setw command
#include <iostream> // for std::cout and std::cin streams

int main() {

  // seed the random number generator
  srand(time(0));
  char another;
  do{
     
  

  // generate two random numbers between 0 and 999 and answer variable
  int x = rand() % 1000;
  int y = rand() % 1000;

  // variables for the user's answer and the correct answer
  int ans, correct;

  // variable for menu choice
  int choice;

  // prompt the user for a type of problem
  std::cout << "Which type of problem would you like to try?" << std::endl;
  std::cout << "  1) Addition" << std::endl;
  std::cout << "  2) Subtraction" << std::endl;
  std::cout << "  3) Multiplication" << std::endl;
  std::cout << "====================" << std::endl;
  std::cout << "Enter 1, 2, or 3: ";
  std::cin >> choice;
  std::cout << std::endl;

  // add your switch statement here to display the correct
  //   type of problem and compute the correct answer

  char operation = ' ';

  switch (choice) {
  case 1:
    operation = '+';
    correct = x + y;
    std::cout << "Addition Problem" << std::endl;
    break;
  case 2:
    operation = '-';
    correct = x - y;
    std::cout << "Subtraction Problem" << std::endl;
    break;
  case 3:
    operation = 'x';
    correct = x * y;
    std::cout << "Multiplication Problem" << std::endl;
    break;
  default:
    operation = ' ';
    correct = 0;
    std::cout << "Invalid Problem Type";
  }

  if (operation != ' ') {
    std::cout << std::setw(6) << x << std::endl;
    std::cout << " " << operation << std::setw(4) << y << std::endl;
    std::cout << "------" << std::endl;
    std::cout << "= ";
    std::cin >> ans;
  }

  // check the answer and dsiplay result
  if (ans == correct) {
    std::cout << std::endl
              << "Congratulations! You got the right answer." << std::endl;
  } else {
    std::cout << "The correct answer is: " << correct << std::endl;
  }



     std::cout << "Do you want another (y/n)?";
      std::cin >> choice;

  } while (another == 'y');
  return 0;
}
