# CPTR 142: Objective #6 (2 point)

## Problem Overview

In this homework you will write a function prototype and definition.

## Scenario

Create a `playerHasEnergy` function that reduces the players energy by a given amount.
If the play still has energy, then the function returns true, otherwise false.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use create the `playerHasEnergy` function with a prototype in `player_has_energy.h` and the definition in `player_has_energy.cpp`.
    The function has two parameters

    * An int for the amount of energy to reduce (pass by value)

    * An int for the amount of energy available (pass by reference)

1. The function must return true when more energy is available, otherwise false.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `player_has_energy.h` and `player_has_energy.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `playerHasEnergy` function which you could implement in `test_driver.cpp` to test your function.

**C++ Code:**
```c++
#include <iostream>
#include "player_has_energy.h"

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
```

**Output:**
```html
Player has 10. Next obstacle effort: 3
Player has 7. Next obstacle effort: 4
Player has 3. Next obstacle effort: 2
Player has 1. Next obstacle effort: 1
4 obstacle were completed.
```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
