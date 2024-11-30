/**
 * Project 1: BridgesUser header file
 */
#pragma once

#include <string>

class BridgesUser {
private:
  unsigned int BridgesNumber;
  std::string BridgesUserID;
  std::string BridgesAPIKey;

public:
  BridgesUser() {
    BridgesNumber = 2421;
    BridgesUserID = "maioan";
    BridgesAPIKey = "95924329765";
    // Your code goes here.
  }
  unsigned int getBridgesNumber() const { return BridgesNumber; }
  std::string getBridgesUserID() const { return BridgesUserID; }
  std::string getBridgesAPIKey() const { return BridgesAPIKey; }
};