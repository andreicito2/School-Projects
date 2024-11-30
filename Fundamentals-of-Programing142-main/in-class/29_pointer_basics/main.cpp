/**
 * In-class Activity: Pointers and Objects
 */
#include "bank_account.h"
#include <iostream> // for cin and cout
using namespace std;

/**====================================================================
 * Main program
 *
 * g++ main.cpp bank_account.cpp && ./a.out
 *
 */
int main() {
  // 1. Define a variable to hold a BankAccount object
BankAccount Andrei;

  // 2. Define a variable to hold a pointer to a BankAccount object (properly
  //    initialized)
BankAccount *pointer = nullptr;
  // 3. Assign the address of the first variable to the second
pointer = &Andrei;
  // 4. Call displayAccountSummary() using the dot operator
Andrei.displayAccountSummary();
  // 5. Call updateInterest() using the dereference operator
(*pointer).updateInterest();
  // 6. Call displayAccountSummary() using the arrow operator
pointer->displayAccountSummary();
  return 0;
}
