/**
 * Beginner: Create a class constructor.
 */
#pragma once
#include <string>

class Enclosure {
public:
  Enclosure(std::string, int);
  void printDetails();

private:
  int size;
  std::string type;
};
