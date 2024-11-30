/**
 * Expert: Implement the functionality for the zoo class
 */
#pragma once

#include "creature.h"
#include <vector>

class Zoo {
public:
  ~Zoo();
  void addCreature(Creature animal);
  void printCensus();
  int getNumberOfLegs();

private:
  std::vector<Creature *> creatures;
};
