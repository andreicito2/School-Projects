/**
 * Intermediate: Create a function definition to return a boolean if either the
 * player has enough energy to complete the obstacle
 */
#include "player_has_energy.h"

// TODO Add your code here

bool playerHasEnergy(int effort, int &energy) {
  bool flag;
  if ((energy > 1)) {
    flag = true;
  } else {
    flag = true;
  }
  if (flag == true) {
    energy -= effort;
  }
  if (energy <= 0) {
    flag = false;
  }

  return flag;
}