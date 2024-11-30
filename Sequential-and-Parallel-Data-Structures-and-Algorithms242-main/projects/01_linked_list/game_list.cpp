/**
 * Project 1: GameList implemented using linked list
 */
#include "game_list.h"
#include "Element.h"
#include <set>
#include <string>

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

/**
 * @brief Construct a new Game List:: Game List object
 *
 */
GameList::GameList() {
  length = 0;
  listData = NULL;
}

/**
 * @brief Destroy the Game List:: Game List object
 *
 * List is empty; all items have been deallocated.
 */
GameList::~GameList() { makeEmpty(); }

/**
 * @brief Remove all game list object and free memory
 *
 * List is empty; all items have been deallocated.
 */
void GameList::makeEmpty() {
  // Your code goes here.
  if (getLength() == 0) {
    return;
  }
  currentPos = listData;
  while (currentPos) {
    bridges::SLelement<std::string> *Delete = currentPos;
    currentPos = currentPos->getNext();
    delete Delete;
  }
  length = 0;
}

/**
 * @brief Returns true if there is no room for another game on the free store;
 * false otherwise.
 *
 * @returns bool
 */
bool GameList::isFull() const {
  bridges::SLelement<std::string> *location;
  try {
    location = new bridges::SLelement<std::string>;
    delete location;
    return false;
  } catch (std::bad_alloc exception) {
    return true;
  }
}

/**
 * @brief Returns the number of items in the list
 *
 * @return int
 */
int GameList::getLength() const { return length; }

/**
 * @brief Return the game details through a pass by reference variable.
 *
 * If found, item's key matches an element's key in the
 * list and a copy of that element has been stored in item;
 * otherwise, item is unchanged.
 *
 * @param[in] title
 * @param[out] gameDetails
 * @param[out] found
 */
void GameList::getGame(std::string title, std::string &gameDetails,
                       bool &found) {
  // Your code goes here.
  found = false;

  if (listData == nullptr) {
    return;
  }
  currentPos = GetHead();
  string Comparison = currentPos->getValue();
  while (title != Comparison && currentPos->getNext() != nullptr) {
    currentPos = currentPos->getNext();
    Comparison = currentPos->getValue();
  }
  gameDetails = currentPos->getLabel();
  if (title == Comparison) {
    found = true;
  }
}

// Your code goes here.

/**
 * @brief Add the game to the sorted list based on game title.
 *
 * The list mains a games in order of of game title.
 * Item is in the list; length has been incremented.
 *
 * @param title
 * @param gameDetails
 * @param rating
 */
void GameList::putGame(std::string title, std::string gameDetails,
                       double rating) {
  // Your code goes here.
  if (isFull()) {
    return;
  } else {

    bridges::SLelement<std::string> *NewGameInfo =
        new bridges::SLelement<std::string>(title, gameDetails);
    if (rating > 8) {
      NewGameInfo->setColor("green");
      NewGameInfo->setSize(40);
    } else if (rating > 6 && 8 >= rating) {
      NewGameInfo->setColor("yellow");
      NewGameInfo->setSize(30);
    } else if (rating > 4 && 6 >= rating) {
      NewGameInfo->setColor("orange");
      NewGameInfo->setSize(20);
    } else if (4 >= rating) {
      NewGameInfo->setColor("red");
      NewGameInfo->setSize(10);
    }
    bridges::SLelement<std::string> *temp = nullptr;
    bridges::SLelement<std::string> *currentLast = listData;

    while (currentLast && title > currentLast->getValue()) {
      temp = currentLast;
      currentLast = currentLast->getNext();
    }

    if (temp == nullptr) {
      NewGameInfo->setNext(currentLast);
      // std::cout << "test 5" << std::endl;
      listData = NewGameInfo;
    } else {
      // std::cout << "test 1" << std::endl;
      NewGameInfo->setNext(temp->getNext());
      // std::cout << "test 2" << std::endl;
      temp->setNext(NewGameInfo);
      // std::cout << "test 3" << std::endl;
    }
  }
  length += 1;
}

/**
 * @brief Remove the game from the title.
 *
 * @param title
 */
void GameList::deleteGame(std::string title) {
  // Your code goes here.
  resetList();
  if (currentPos == nullptr) {
    return;
  } else if (title == currentPos->getValue()) {
    bridges::SLelement<std::string> *DeleteThis = currentPos;
    listData = listData->getNext();
    delete DeleteThis;
    length -= 1;
  } else {
    bridges::SLelement<std::string> *DeleteThis = currentPos->getNext();
    while (DeleteThis && DeleteThis->getValue() != title) {
      currentPos = DeleteThis;
      DeleteThis = DeleteThis->getNext();
    }
    if (DeleteThis) {
      bridges::SLelement<std::string> *temp = DeleteThis->getNext();
      currentPos->setNext(temp);
      delete DeleteThis;
      length -= 1;
    } else {
      return;
    }
  }
}

/**
 * @brief Set the iterator back to the beginning of the list.
 *
 */
void GameList::resetList() {
  // Your code goes here.
  currentPos = GetHead();
}

/**
 * @brief This iterator function returns the next game.
 *
 * A copy of the next item in the list is returned.
 * When the end of the list is reached, currentPos
 * is reset to begin again.
 *
 * @param[out] title
 * @param[out] gameDetails
 */
void GameList::getNextGame(std::string &title, std::string &gameDetails) {
  // Your code goes here.
  title = currentPos->getValue();
  currentPos = currentPos->getNext();
}
