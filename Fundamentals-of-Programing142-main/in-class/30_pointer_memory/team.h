/*************************************************************************
 *
 * File Name: Team.h
 * Username:  cslab1
 * Username:  cslab2
 * Username:  cslab3
 * Course:    CPTR 142
 *
 * NOTE: Although it is considered a best practice to separate the
 * code (.cpp) from the API (.h), we can take a shortcut and make
 * inline functions to avoid the extra file.
 */

#pragma once

#include "player.h"
#include <iostream>
#include <string>
#include <vector>

class Team {
private:
  std::vector<Player *> players;

public:
  // no-argument constructor
  Team() { std::cout << "-~= Team Constructor Called =~-" << std::endl; }

  ~Team() {
    std::cout << "-~= Team Destructor Called =~-" << std::endl;
    // TODO: delete players
  }

  /**
   * addStudent
   * Precondition: Takes a single player anme.
   * Postcondition: Adds a Player to the team roster.
   */
  void addPlayerNamed(std::string name) {
    // TODO
  }

  /**
   * displayRoster
   * Precondition: None
   * Postcondition: Prints to the console the roster of students in the course.
   */
  void displayRoster() {
    // TODO
  }
};
