/**
 * Project 1: Menu implementation
 */
#include "menu.h"
#include "Array.h"
#include "Bridges.h"
#include "DataSource.h"
#include "SLelement.h"
#include "bridges_user.h"
#include "game_list.h"
#include <cctype>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

void printList(std::ostream &dataFile, GameList &list) {
  // Pre:  list has been initialized.
  //       dataFile is open for writing.
  // Post: Each component in list has been written to dataFile.
  //       dataFile is still open.
  dataFile << "PrintList: " << std::endl;
  list.resetList();
  int length = list.getLength();
  if (length == 0) {
    dataFile << "  ** List is empty." << std::endl;
  } else {
    for (int counter = 1; counter <= length; counter++) {
      std::string gameTitle, gameDetails;
      list.getNextGame(gameTitle, gameDetails);
      dataFile << "  " << counter << ". " << gameTitle << std::endl;
    }
  }
}

void menu(std::istream &inStream, std::ostream &outStream,
          const std::string &outputLabel, bool linkOutput) {
  // Used for test driver functionality.
  std::string option;

  // Used to interact with Title/GameDetail List.
  std::string gameTitle;
  std::string gameDetails;
  int count;

  GameList list;
  bool found; // For use with GetActor

  outStream << outputLabel << std::endl;
  inStream >> option;

  // create the Bridges object, set credentials
  BridgesUser bUser;
  bridges::Bridges bridges(bUser.getBridgesNumber(), bUser.getBridgesUserID(),
                           bUser.getBridgesAPIKey());

  bridges.setTitle("Game titles with details");
  bridges.setDescription(
      "Here the data is processed to be a list of Game Titles "
      "with all Game Details.");
  bridges.postVisualizationLink(linkOutput);

  // get the Game IGN Game Collection (Meta Data)
  bridges::DataSource ds(&bridges);
  std::vector<bridges::Game> gameList;
  try {
    gameList = ds.getGameData();
  } catch (std::string ex) {
    std::cout << ex << std::endl;
  }

  //  Game Titles can repeat in the GameTitle-GameDetails pairs; so we will
  //  process the list of GameTitle-GameDetails pairs so that we get a list of
  //  GameTitles with all the GameDetails (Title, Platform, Genre, Rating). We
  //  will use a map for this
  unordered_map<std::string, GameObject> gameMap;
  for (auto im : gameList) {
    std::string gameDetail = im.getTitle() + "\n" + im.getPlatformType() + "\n";
    for (std::string genre : im.getGameGenre()) {
      gameDetail += genre + ", ";
    }
    gameDetail += "\n";
    gameDetail += std::to_string(im.getRating());

    GameObject amo = {gameDetail, im.getRating()};
    gameMap[im.getTitle()] = amo;
  }

  std::ofstream logStream;
  logStream.open("log.txt");

  int numCommands = 0;
  while (option != "Quit") {
    if (option == "Menu") {
      outStream << "Menu options" << std::endl;
      outStream << " - Menu.                  Display menu." << std::endl;
      outStream << " - PrintList.             Prints list." << std::endl;
      outStream
          << " - MakeEmpty.             Returns the list to the empty state."
          << std::endl;
      outStream << " - IsFull.                Returns whether list is full."
                << std::endl;
      outStream << " - GetLength.             Returns length of list."
                << std::endl;
      outStream << " - GetGame <string>.      Retrieves list element whose key "
                   "matches "
                   "item's key."
                << std::endl;
      outStream << " - PutGame <string>.      Add item to list." << std::endl;
      outStream
          << " - DeleteGame <string>.   Deletes the element whose key matches "
             "item's key."
          << std::endl;
      outStream << " - ResetList.             Reinitializes current position "
                   "of iteration "
                   "through list."
                << std::endl;
      outStream << " - GetNextGame.           Gets next element in list."
                << std::endl;
      outStream << " - Visualize.             Builds the bridges "
                   "visualization and prints the URL."
                << std::endl;
      outStream << " - AddAll.                Adds all Games to the list."
                << std::endl;
      outStream
          << " - AddX <count>.          Adds X number of Games to the list."
          << std::endl;
      outStream << " - Quit.                  Quit application." << std::endl;
    } else if (option == "PrintList") {
      printList(outStream, list);
    } else if (option == "MakeEmpty") {
      list.makeEmpty();
      outStream << "List has been emptied." << std::endl;
    } else if (option == "IsFull") {
      if (list.isFull()) {
        outStream << "List is full." << std::endl;
      } else {
        outStream << "List is not full." << std::endl;
      }
    } else if (option == "GetLength") {
      outStream << "List has " << list.getLength() << " items." << std::endl;
    } else if (option == "GetGame") {
      inStream >> gameTitle;
      list.getGame(gameTitle, gameDetails, found);
      if (found) {
        outStream << "Game " << gameTitle << " was found." << std::endl;
        outStream << gameDetails << std::endl;
      } else {
        outStream << "Game " << gameTitle << " was not found." << std::endl;
      }
    } else if (option == "PutGame") {
      std::getline(inStream >> std::ws, gameTitle);
      if (list.isFull()) {
        outStream << "The array is full. Item not inserted" << std::endl;
      } else {
        auto got = gameMap.find(gameTitle);
        if (got != gameMap.end()) {
          list.putGame(got->first, got->second.details, got->second.ratings);
          outStream << "Game " << gameTitle << " was inserted into the list."
                    << std::endl;
        } else {
          outStream << "Game " << gameTitle << " was not found in dataset."
                    << std::endl;
        }
      }
    } else if (option == "DeleteGame") {
      std::getline(inStream >> std::ws, gameTitle);
      list.deleteGame(gameTitle);
      outStream << gameTitle << " is deleted." << std::endl;

    } else if (option == "ResetList") {
      list.resetList();
      outStream << "List was reset." << std::endl;
    } else if (option == "GetNextGame") {
      string gameTitle, gameDetails;
      list.getNextGame(gameTitle, gameDetails);
      outStream << "The next item in the list is " << gameTitle << "."
                << std::endl;
    } else if (option == "Visualize") {
      bridges.setServer("clone");

      bridges.setDataStructure(list.GetHead());
      bridges.visualize();
      outStream << "List was visualized." << std::endl;
    } else if (option == "AddAll") {
      for (auto im : gameMap) {
        list.putGame(im.first, im.second.details, im.second.ratings);
      }
      outStream << "All games have been added." << std::endl;
    } else if (option == "AddX") {
      inStream >> count;
      int currentCount = 0;
      for (auto im : gameMap) {
        if (count < ++currentCount) {
          break;
        }
        list.putGame(im.first, im.second.details, im.second.ratings);
      }
      outStream << "Added " << count << " games." << std::endl;
    } else {
      outStream << option << " is not a valid command." << std::endl;
      logStream << "Invalid ";
    }
    numCommands++;
    logStream << option << " is the " << numCommands << " command completed."
              << std::endl;
    inStream >> option;
  }
  logStream << "Quit" << std::endl << "Testing completed." << std::endl;
}
