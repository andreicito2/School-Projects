/**
 * Intermediate: Create a class for Employees
 */
#include "employee.h"
#include <string>

// Your code goes here

double Employee::getPay(double wgess) {

  wgess = wgess * this->wage;

  return wgess;
};

std::string Employee::getName() { return this->name; };

Employee::Employee(std::string name, double wage) {
  this->name = name;
  this->wage = wage;
}