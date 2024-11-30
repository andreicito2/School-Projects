/**
 * Beginner: Create a program that converts gallons to liters.
 */
#include "food_supplies.h"
#include <iostream>

void updateFoodSupplies(int animals, double &hay , double &grain,
                        double &water) {
  hay -= animals * 3;
  grain -= animals;
  water -= animals * 1.5;
}

void printFoodSupplies(double hay, double grain, double water) {
  std::cout << "--<= Supply =>--" << std::endl;
  std::cout << "    Hay: " << hay << std::endl;
  std::cout << "  Grain: " << grain << std::endl;
  std::cout << "  Water: " << water << std::endl;
}