/**
 * Implement your function in the file identification.h
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "animal.h"
#include "animal_instance.h"
#include <iostream>

int main() {
  Animal myDog = getAnimal("tiger", 3);
  myDog.printTag();
}
