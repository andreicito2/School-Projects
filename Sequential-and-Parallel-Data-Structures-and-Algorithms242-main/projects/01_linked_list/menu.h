/**
 * Project 1: Menu header
 */
#pragma once

#include "game_list.h"
#include <iostream>
#include <string>


//  We will use this class to keep track of the game details and ratings;
//  We will use that to color/size the nodes
struct GameObject {
  std::string details;
  double ratings;
};

void printList(std::ostream &dataFile, GameList &list);

void menu(std::istream &inStream, std::ostream &outStream,
          const std::string &outputLabel, bool linkOutput);
