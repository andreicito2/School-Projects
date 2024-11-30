/*************************************************************************
 *
 * In-Class Exercise: Define Minimum and Maximum Function
 *
 * File Name: minMax.cpp
 * Course:    CPTR 142
 */

#include <iostream> // for std::cin and std::cout
#include <ostream>

// Define Maximum Here

// Define Minimum Here

int myMin(int num1, int num2){
    if (num1 > num2){
        return num1;
    }
    else {
    return num2;
    }

}

// Stretch Goals:
// ==============
//   * Define a "maxThree" function that returns the maximum of three integers.
//     Can you do this using the existing myMax function?
//
//   * Define a "middle" function that returns the middle number in a list of
//     three integers.  Use the existing two-number myMax amd myMin functions
//     to help.

// Here is the main program
int main() {
    int number1, number2, result;
    std::cout << "What numbers would you like to compare :";
    std::cin >> number1 >>  number2;

    result = myMin(number1, number2);
    std::cout << result << std::endl;
  // Use Minimum and Maximum Here

  return 0;
}