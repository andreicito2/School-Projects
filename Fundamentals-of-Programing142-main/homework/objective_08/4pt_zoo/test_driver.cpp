/**
 * Implement your function in the file zoo_class.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "creature.h"
#include "zoo.h"
#include <iostream>
#include <string>

int main() {
  Zoo zoo;
  Creature animal1 = Creature("Lion", 4);
  Creature animal2 = Creature("Parrot", 2);

  zoo.addCreature(animal1);
  zoo.addCreature(animal2);

  zoo.printCensus();

  std::cout << "Total Legs: " << zoo.getNumberOfLegs() << std::endl;

  return 0;
}
