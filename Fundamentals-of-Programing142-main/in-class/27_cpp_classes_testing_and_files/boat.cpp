#include <iostream>
#include "boat.h"

void BoatRegistration::setYear(int newYear) { year = newYear; }

void BoatRegistration::setCounty(CountyFIPS newCounty) { county = newCounty; }

void BoatRegistration::setCode(int newCode) { code = newCode; }

  void BoatRegistration::printLicenseNum(){

      std::cout << county << "-" << year << '-' << code << std::endl;
  }