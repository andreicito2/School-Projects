/**
 * Beginner: Override the equal comparison for a class.
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
  int getAge() const { return age; }
  std::string getSpecies() const { return species; }

private:
  int age;
  std::string species;
};
