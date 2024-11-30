# CPTR 142: Objective #8 (4 point)

## Problem Overview

Your task in this homework assignment is to implement a zoo class. The Zoo class must use a pointers to keep track of all the animals.
The class member functions allow a user to add creatures, print the census, and get the total number of legs in the zoo.

## Scenario

Complete the `addCreature`, `getNumberOfLegs` & `printCensus` function that correctly adds a creature to the vector, prints the animal and its description, and returns
the total amount of legs in the zoo.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must implement the `addCreature` method in the `Zoo` class found in `zoo.cpp` file that allocates a creature in the heap and stores the creature pointer.

1. You must implement the `printCensus` method in the `Zoo` class found in `zoo.cpp` file that prints out the type of animal and the number of legs with the format seen below.

1. You must implement the `getNumberOfLegs` method in the `Zoo` class found in `zoo.cpp` file that returns the sum of all the creature legs in the zoo.

1. You must implement the `~Zoo` destructor member function in `zoo.cpp` file that cleans up memory from the new allocations in `addCreature`.

1. You must use the following keywords:

    * `new`
    * `delete`
    * `nullptr`

1. You must format your code using the "Format Document" command in your development environment.

1. The file `zoo.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `creature.h`, `zoo.h` and `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `Zoo` class which you could implement in `test_driver.cpp` to test your function.
` class which you could implement in `test_driver.cpp` to test your function.

  **C++ Code:**
  ```c++
  #include <iostream>
  #include <string>
  #include "zoo.h"
  #include "creature.h"

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
  ```

  **Output:**
  ```html
  Zoo Census:
  - Lion with 4 leg(s)
  - Parrot with 2 leg(s)
  Total Legs: 6
  ```

## Grade Specification

You will earn **four point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
