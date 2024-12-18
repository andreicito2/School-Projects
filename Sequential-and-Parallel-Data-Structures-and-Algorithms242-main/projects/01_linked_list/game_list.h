/**
 * Project 1: GameList header
 */
#pragma once

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
#pragma GCC diagnostic ignored "-Wsign-compare"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-variable"
#include "Array.h"
#include "Bridges.h"
#include "DataSource.h"
#include "SLelement.h"
#pragma GCC diagnostic pop

#include <string>

// Bridges library must be provided by the user of this class.

class GameList {
public:
  GameList();
  // Constructor

  ~GameList();
  // Destructor

  void makeEmpty();
  // Function: Returns the list to the empty state.
  // Post:  List is empty.

  bool isFull() const;
  // Function:  Determines whether list is full.
  // Pre:  List has been initialized.
  // Post: Function value = (list is full)

  int getLength() const;
  // Function: Determines the number of elements in list.
  // Pre:  List has been initialized.
  // Post: Function value = number of elements in list

  void getGame(std::string title, std::string &gameDetails, bool &found);
  // Function: Retrieves list element whose key matches item's key (if present).
  // Pre:  List has been initialized.
  // Post: If there is an element someItem whose key matches
  //       item's key, then found = true and someItem is returned;
  //     otherwise found = false and item is returned.
  //       List is unchanged.


  void putGame(std::string title, std::string gameDetails, double rating);
  // Function: Adds item to list.
  // Pre:  List has been initialized.
  //       List is not full.
  //       item is not in list.
  // Post: item is in list.

  void deleteGame(std::string title);
  // Function: Deletes the element whose key matches item's key.
  // Pre:  List has been initialized.
  //       Key member of item is initialized.
  //       One and only one element in list has a key matching item's key.
  // Post: No element in list has a key matching item's key.

  void resetList();
  // Function: Initializes current position for an iteration through the list.
  // Pre:  List has been initialized.
  // Post: Current position is prior to list.

  void getNextGame(std::string &title, std::string &gameDetails);
  // Function: Gets the next element in list.
  // Pre:  List has been initialized and has not been changed since last call.
  //       Current position is defined.
  //       Element at current position is not last in list.
  //
  // Post: Current position is updated to next position.
  //       item is a copy of element at current position.

  bridges::SLelement<std::string> *GetHead() { return listData; }
  // Function: Returns the pointer to the beginning of the list.
  // Pre:  List has been initialized.
  // Post: List pointer is returned.

private:
  bridges::SLelement<std::string> *listData;
  int length;
  bridges::SLelement<std::string> *currentPos;
};
