/**
 * Beginner: Create a class instance.
 */
#pragma once
#include <iostream>
#include <string>

class Animal {
public:
  Animal(std::string species, int age) {
    this->species = species;
    this->age = age;
  }
  void setName(std::string name) { this->name = name; }
  void adopt() { this->adopted = true; }
  void printTag() {
    std::cout << name << " is a " << age << " year old " << species << "."
              << std::endl;
  }

private:
  bool adopted = false;
  int age;
  std::string name = "<unknown>";
  std::string species;
};
