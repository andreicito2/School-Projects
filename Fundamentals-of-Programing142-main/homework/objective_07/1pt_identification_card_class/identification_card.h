/**
 * Beginner: Create a class with an accessor and mutator methods for a private
 * member variable
 */
#pragma once

// TODO Add your code here

class IdentificationCard {
public:
  int getIdNumber();
  void setIdNumber(int newIdnumber);

private:
  int idNumber;
};