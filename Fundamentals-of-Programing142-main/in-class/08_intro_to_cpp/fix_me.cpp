/*************************************************************************
 *
 * In-Class Exercise:  Find and fix the errors in the following C++
 *                     program so that it will compile and run 
 *                     as expected.
 *
 * File Name: fix_me.cpp
 * Course:    CPTR 142
 *
 */

#include <iostream>
#include <string>

int main() {
   
// assign some variable values
    int a = 25;
    b = 5;

           // output several computations -- std::endl will end the line
    std::cout<< " a + b = " << a+b<< std::endl
   std::cout << " a * b = " << a * b <<std::endl;
     std::cout   << " a / b = " <<    a / b << std::endl;

    // assign a few more variables
int grad_year;
std::string college = Walla Walla University;

    // ask for and save graduation year
    std::cout << std::endl << "In what year will you graduate?;
    std::cin >> grad_Year;

    // output a sentence based on this input
    std::cout << "You will graduate from " << college << " in ";
    std::cout << grad_year << "." std::endl;

         return    0;
}
