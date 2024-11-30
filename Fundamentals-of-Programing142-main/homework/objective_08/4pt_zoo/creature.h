/**
 * Homework Assignment: Class for using pointers
 */

#pragma once
#include <string>

class Creature {
public:
  Creature(std::string animal, int legs) {
    this->animal = animal;
    this->legs = legs;
  }

  std::string getAnimal() { return animal; }

  int getNumberOfLegs() { return legs; }

private:
  std::string animal;
  int legs;
};
