/**
 * Intermediate: Add the car method definitions for fillTank, drive and getGas.
 */
#include "car.h"

// Your code goes here
void Car::fillTank(double newGas) { *gas += newGas; }

void Car::drive(double miles) { *gas -= miles / 20; }
double Car::getGas() { return *gas; }