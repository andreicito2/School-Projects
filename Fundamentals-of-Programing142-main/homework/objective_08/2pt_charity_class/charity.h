/**
 * Intermediate: Create variables in the heap and clean them up with a
 * destructor
 */
#pragma once

#include <vector>

class Charity {
public:
  ~Charity();
  void addDonation(double newDonation);
  std::vector<double *> getDonations() { return donations; }

private:
  std::vector<double *> donations;
};
