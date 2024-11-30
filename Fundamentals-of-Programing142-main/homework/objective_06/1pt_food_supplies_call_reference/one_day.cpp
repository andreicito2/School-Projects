/**
 * Beginner: Create a program that converts gallons to liters.
 */
#include "food_supplies.h"

// TODO Add your code here
void oneDay(int animals) {
  double hay = 50, grain = 50, water = 50;
  updateFoodSupplies(animals, hay, grain, water);
  printFoodSupplies(hay, grain, water);
}