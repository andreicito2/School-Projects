/**
 * Beginner: Create a class instance of Animal
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
  void printTag() { std::cout << age << " year old " << species << std::endl; }

private:
  int age;
  std::string species;
};
