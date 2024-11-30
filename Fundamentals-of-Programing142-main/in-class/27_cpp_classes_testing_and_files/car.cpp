/*************************************************************************
 *
 * In-Class Exercise: Class definition
 *
 * File Name: car.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream>

// https://en.wikipedia.org/wiki/List_of_counties_in_Washington
enum CountyFIPS { FIPS_ADAMS = 1, FIPS_KING = 33, FIPS_WALLA_WALLA = 71 };

class CarRegistration {
public:
  void setYear(int newYear);
  void setCounty(CountyFIPS newCounty);
  void setCode(int newCode);
  void printLicenseNum();

private:
  int year;
  CountyFIPS county;
  int code;
};

void CarRegistration::setYear(int newYear) { year = newYear; }

void CarRegistration::setCounty(CountyFIPS newCounty) { county = newCounty; }

void CarRegistration::setCode(int newCode) { code = newCode; }

// printLicenseNum() with format <county>-<year>-<code>

int main() {
  CarRegistration car;

  car.setYear(2021);
  car.setCounty(FIPS_WALLA_WALLA);
  car.setCode(42);
  car.printLicenseNum(); // prints "71-2021-42\n"

  return 0;
}
