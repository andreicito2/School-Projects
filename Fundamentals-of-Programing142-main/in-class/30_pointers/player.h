/*************************************************************************
 *
 * Checkpoint Assignment: Dynamic Memory
 *
 * File Name:       Player.h
 * Course:          CPTR 142
 *
 */
// ======================================================================
// ====== DO NOT EDIT == DO NOT EDIT == DO NOT EDIT == DO NOT EDIT ======
// ======================================================================
#pragma once

#include <iostream>
#include <string>

class Player {
private:
  // The name property of a Person object
  std::string name;

public:
  // no-argument constructor
  Player() { std::cout << "Player initialized without a name" << std::endl; }

  // overloaded constructor for initializing the Name property
  Player(const std::string &n) {
    std::cout << "Player initialized with name of \"" << n << '\"' << std::endl;
    name = n;
  }

  ~Player() {
    std::cout << "Destructor called on player with name \"" << name << '\"';
  }

  std::string getName() { return name; }

  void setName(const std::string &n) { name = n; }
};
