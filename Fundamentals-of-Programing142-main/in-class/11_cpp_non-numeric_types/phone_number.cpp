/*************************************************************************
 *
 * In-Class Exercise: Write a phone number parser that accepts a 10-digit
 *                    number of the form DDDDDDDDDD, and prints out:
 *                       a. number of digits
 *                       b. formatted (DDD) DDD-DDDD version
 *                       c. area code only
 *                       e. local number only
 *
 * File Name: phoneNumber.cpp
 * Course:    CPTR 142
 *
 */

#include <iostream>
#include <string>
//using namespace std;
int main() {

  // We use a single string variable in this exercise
  std::string phone;

  // Prompt the user for input
  std::cout << "Enter a phone number: ";
  std::cin >> phone;

  // Display information
  std::cout << "You entered " << phone.length() << "digits, the fist was \"" << phone.at(0)<< "\"." << std::endl;  
  // Format the phone number
  std::cout << "Formatted: (" << phone.substr(0, 3) << ") " << phone.substr(2,3) << "-" << phone.substr(6, 4);
  
  // Display the various parts

  return 0;
}
