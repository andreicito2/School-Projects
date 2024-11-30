/*************************************************************************
 *
 * Objective 4: Collect information into two arrays (integer and string).
 *              Print out the total for the integer array and the values in the
 *              string array.
 */

#include <iostream>
#include <ostream>

int main() {
  // define variables
  char userTicket;
  int numTickets;
  int totalCost;
  // Prompt for and collect input
  std::cout << "What type of zoo ticket:" << std::endl
            << " c - Child  $10" << std::endl
            << " a - Adult  $15" << std::endl
            << " s - Senior $12" << std::endl;
  std::cin >> userTicket;
  std::cout << "How many tickets? " << std::endl;
  std::cin >> numTickets;
  // Print the cost of the tickets
  switch (userTicket) {
  case 'c':
    totalCost = 10;
    totalCost = totalCost * numTickets;
    std::cout << "The cost will be $" << totalCost << std::endl;
    break;

  case 'a':
    totalCost = 15;
    totalCost = totalCost * numTickets;
    std::cout << "The cost will be $" << totalCost << std::endl;
    break;

  case 's':
    totalCost = 12;
    totalCost = totalCost * numTickets;
    std::cout << "The cost will be $" << totalCost << std::endl;
    break;
  default:
    std::cout << "Invalid ticket selection" << std::endl;
  }

  return 0;
}
