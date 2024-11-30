/**
 * Implement your function in the file pointer_sum.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include <iomanip>
#include <iostream>

#include "charity.h"

int main() {
  Charity *testObj = new Charity();
  testObj->addDonation(1000);
  testObj->addDonation(20);

  std::cout << "Donations" << std::endl;
  std::cout << "---------" << std::endl;
  for (auto eachEle : testObj->getDonations()) {
    std::cout << std::setw(9) << *eachEle << std::endl;
  }

  delete testObj;
  testObj = nullptr;
  return 0;
}
