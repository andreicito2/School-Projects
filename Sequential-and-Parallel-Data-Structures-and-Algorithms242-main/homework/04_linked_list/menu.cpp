/****************************************************************************
 *
 * File Name:  listDriver.cpp
 * Course:     CPTR 242
 * Source:     C++ Plus Data Structures 6th Edition
 *             by Nell Dale, Chip Weems, Tim Richards
 *
 */
// Test driver
#include "menu.h"
#include "unsorted.h"
#include <fstream>
#include <iostream>
#include <string>

void menu(std::istream &inStream, std::ostream &outStream,
          const std::string &outputLabel) {

  std::string option; // operation to be executed

  int number;
  ItemType item;
  UnsortedType list;
  bool found;

  std::ofstream logStream;
  logStream.open("log.txt");

  outStream << outputLabel << std::endl;
  inStream >> option;

  int numCommands = 0;
  while (option != "Quit") {
    if (option == "Menu") {
      outStream << "Menu options:" << std::endl;
      outStream << " - Menu.               Display menu." << std::endl;
      outStream
          << " - Sort.               Sorts list using a MinSort Algorithm."
          << std::endl;
      outStream << " - MinItem.            Returns smallest item in the list"
                << std::endl;
      outStream << " - PutItem <data>.     Adds the item to the list"
                << std::endl;
      outStream << " - DeleteItem <data>.  Deletes the item from the list"
                << std::endl;
      outStream << " - GetItem <data>.     Finds the item in the list"
                << std::endl;
      outStream << " - GetLength.          Returns size of the list"
                << std::endl;
      outStream << " - MakeEmpty.          Clears List" << std::endl;
      outStream << " - PrintList.          Prints out list" << std::endl;
      outStream << " - Quit.               Quit application" << std::endl;
    } else if (option == "Sort") {
      list.SortItems();
      outStream << "Sorted list." << std::endl;
    } else if (option == "MinItem") {
      item = list.MinItem();
      item.Print(outStream);
      outStream << " is the minimum value." << std::endl;
    } else if (option == "PutItem") {
      inStream >> number;
      item.Initialize(number);
      list.PutItem(item);
      item.Print(outStream);
      outStream << " was added to the list." << std::endl;
    } else if (option == "DeleteItem") {
      inStream >> number;
      item.Initialize(number);
      list.DeleteItem(item);
      item.Print(outStream);
      outStream << " was deleted." << std::endl;
    } else if (option == "GetItem") {
      inStream >> number;
      item.Initialize(number);
      item = list.GetItem(item, found);
      item.Print(outStream);
      if (found) {
        outStream << number << " found in list." << std::endl;
      } else {
        outStream << number << " not in list." << std::endl;
      }
    } else if (option == "GetLength") {
      outStream << "Length is " << list.GetLength() << std::endl;
    } else if (option == "IsFull") {
      if (list.IsFull()) {
        outStream << "List is full." << std::endl;
      } else {
        outStream << "List is not full." << std::endl;
      }
    } else if (option == "MakeEmpty") {
      list.MakeEmpty();
      outStream << "List has been cleared " << std::endl;
    } else if (option == "PrintList") {
      list.ResetList();
      outStream << list;
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
