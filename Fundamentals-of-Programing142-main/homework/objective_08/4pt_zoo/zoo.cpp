/**
 * Expert: Implement the functionality for the zoo class
 */
#include "zoo.h"
#include "creature.h"
#include <iostream>

// Your code goes here

void Zoo::addCreature(Creature animal) {

  creatures.push_back(new Creature(animal));
}

void Zoo::printCensus() {
  std::cout << "Zoo Census:" << std::endl;
  for (unsigned int i = 0; i < creatures.size(); i++) {

    std::cout << " - " << creatures[i]->getAnimal() << " with "
              << creatures[i]->getNumberOfLegs() << " leg(s)" << std::endl;
  }
}

int Zoo::getNumberOfLegs() {
  int numLegs = 0;
  for (unsigned int i = 0; i < creatures.size(); i++) {

    numLegs += creatures[i]->getNumberOfLegs();
  }
  return numLegs;
}
Zoo::~Zoo() {
  for (unsigned int i = 0; i < creatures.size(); i++) {
    delete creatures[i];
    creatures[i] = nullptr;
  }
}