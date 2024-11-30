/**
 * Intermediate: Create variables in the heap and clean them up with a
 * destructor
 */
#include "charity.h"
#include <iostream>
#include <vector>

// Your code goes here
void Charity::addDonation(double newDonation) {
  // double *newDonations = &newDonation;
  // Charity* pDono = nullptr;
  // pDono = new newDonation;
  donations.push_back(new double(newDonation));
}

Charity::~Charity() {
  std::cout << "Destructor called." << std::endl;
  for (unsigned int i = 0; i < donations.size(); i++) {
    delete donations[i];
    donations[i] = nullptr;
  }
}