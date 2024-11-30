/*************************************************************************
 *
 * Objective 4: Determining an employee's retroactive pay.
 *
 * File Name: back_pay.cpp
 * Name:      ?
 * Course:    CPTR 142
 * Date:
 *
 */

#include <iomanip>
#include <iostream>
#include <ostream>

int main() {
  // Define your variables
  double annual_salary;
  double num_months;
  const double percent_increase = 1.076;
  double new_salary_year;
  double new_salary_month;
  double retroactive_due;
  // Collect user input
  std::cout << "Enter current annual salary: ";
  std::cin >> annual_salary;
  std::cout << "Enter number of months for back pay: ";
  std::cin >> num_months;
  // Perform calculations
  new_salary_year = annual_salary * percent_increase;
  new_salary_month = new_salary_year / 12;
  retroactive_due =
      (new_salary_month * num_months) - ((annual_salary / 12) * num_months);

  // Print out the results
  std::cout << std::fixed << std::setprecision(2);
  std::cout
      << std::endl
      << "I'll return new annual salary, monthly salary, and retroactive pay."
      << std::endl;
  std::cout << "New annual salary: $" << new_salary_year << std::endl;
  std::cout << "New monthly salary: $" << new_salary_month << std::endl;
  std::cout << "Retroactive salary due: $" << retroactive_due << std::endl;
  return 0;
}
