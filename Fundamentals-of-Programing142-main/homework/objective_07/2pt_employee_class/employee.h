/**
 * Intermediate: Create a class for Employees
 */
#pragma once
#include <string>
// Your code goes here

class Employee {
public:
  Employee(std::string name, double wage);
  double getPay(double wges);
  std::string getName();

private:
  double wage;
  std::string name;
};