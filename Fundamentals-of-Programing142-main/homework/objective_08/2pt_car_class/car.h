/**
 * Intermediate: Add the car method definitions for fillTank, drive and getGas.
 */
#pragma once

class Car {
public:
  Car() { gas = new double(0); }
  ~Car() {
    delete gas;
    gas = nullptr;
  }
  void fillTank(double newGas);
  void drive(double miles);
  double getGas();

private:
  double *gas;
};
