/**
 * Expert: Create a program that builds a menu for the hay management system.
 *
 * DO NOT EDIT FILE
 * Changes will not be considered during grading.
 */
#include "hay_supplies.h"
#include <iostream>

double inputHayAmmount() {
  double hay;
  std::cout << "How much hay are you adding? ";
  std::cin >> hay;
  return hay;
}

double inputAnimalsCount() {
  double animals;
  std::cout << "How many animals are you feeding? ";
  std::cin >> animals;
  return animals;
}

void addToHaySupply(double hayAddition, double &haySupply) {
  haySupply += hayAddition;
}

void feedHayToAnimals(int animals, double &haySupply) {
  haySupply -= animals * 3;
}

void printHaySupplies(double hay) {
  std::cout << "========= SUPPLY =========" << std::endl;
  std::cout << " <> Hay: " << hay << std::endl;
}
