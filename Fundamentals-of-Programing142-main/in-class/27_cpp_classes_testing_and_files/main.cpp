/*************************************************************************
 *
 * In-Class Exercise: Split program into multiple files
 *
 * File Name: main.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream>
#include "boat.h"

// printLicenseNum() with format <county>-<year>-<code>

int main() {
  BoatRegistration boat;

  boat.setYear(2021);
  boat.setCounty(FIPS_WALLA_WALLA);
  boat.setCode(42);
  boat.printLicenseNum(); // prints "71-2021-42\n"

  return 0;
}
