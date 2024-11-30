/**
 * Implement your function in the file player_has_energy.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "player_has_energy.h"
#include <iostream>

int main() {
  int energy = 10;
  int obstacleCount = 0;
  int obstacleEffort = 0;

  while (playerHasEnergy(obstacleEffort, energy)) {
    std::cout << "Player has " << energy << ". Next obstacle effort: ";
    std::cin >> obstacleEffort;
    obstacleCount++;
  }

  std::cout << obstacleCount << " obstacle were completed." << std::endl;
}
