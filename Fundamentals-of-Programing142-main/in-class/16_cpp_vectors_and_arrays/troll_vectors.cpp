/*************************************************************************
 *
 * In-Class Exercise: Arrays vs. Vectors
 *
 * File Name: troll_vectors.cpp
 * Course:    CPTR 142
 */

#include <iostream> // for std::cin and std::cout
#include <string>   // for string variables
#include <vector>   // for std::vectors

/*====================================================================
 * Main program
 */

int main() {

  // declare variables
  int numStores;
  char newStore = 'n';
  std::vector<double> prices;
  std::vector<std::string> stores;
  std::string tmpStore;
  double tmpPrice;
  std::string junk;

  // get numStores of stores and prices
  std::cout << "How many prices do you wish to record? ";
  std::cin >> numStores;

  // consume extra std::endl
  getline(std::cin, junk);

  // loop to collect information
  for (int i = 0; i < numStores; i++) {
    // get store and price information for new entry
    std::cout << "Store " << (i + 1) << ": ";
    getline(std::cin, tmpStore);
    stores.push_back(tmpStore);
    std::cout << "Price " << (i + 1) << ": ";
    std::cin >> tmpPrice;
    prices.push_back(tmpPrice);

    // consume extra std::endl
    getline(std::cin, junk);
  }

  // do loop to allow new store entry
  do {
    // if this is a new-store instance, prompt
    if (newStore == 'y') {
      // get store and price info for new entry
      std::cout << std::endl << "Score " << (stores.size() + 1) << ": ";
      getline(std::cin, tmpStore);
      stores.push_back(tmpStore);
      std::cout << "Price " << (stores.size() + 1) << ": ";
      std::cin >> tmpPrice;
      prices.push_back(tmpPrice);

      // consume extra std::endl
      getline(std::cin, junk);
    }

    // loop to find smallest price
    int where = 0;
    double min = prices.at(0);
    for (int i = 1; i < prices.size(); i++) {
      if (prices.at(i) < min) {
        where = i;
        min = prices.at(where);
      }
    }

    // print out cheapest price and store
    std::cout << std::endl
              << "The cheapest price is $" << prices.at(where) << " at "
              << stores.at(where) << "." << std::endl;

    // ask about new store
    std::cout << std::endl << "Enter a new store (y/n)?";
    std::cin >> newStore;

    getline(std::cin, junk);

  } while (newStore == 'y');

  // we are done!
  return 0;
}