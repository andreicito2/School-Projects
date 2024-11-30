/**
 * Assignment 6: Test driver implementation
 */
#include "menu.h"
#include "item_type.h"
#include "open_addressing_hash_table.h"
#include <fstream>
#include <iostream>

void menu(std::istream &inStream, std::ostream &outStream,
          const std::string &outputLabel) {
  std::string option; // operation to be executed
  std::string key;
  int number;
  ItemType item;
  ItemType *itemPointer;
  OpenAddressingHashTable hashTable(10);

  std::ofstream logStream;
  logStream.open("log.txt");

  outStream << outputLabel << std::endl;
  inStream >> option;

  int numCommands = 0;
  while (option != "Quit") {
    if (option == "Menu") {
      outStream << "Menu options:" << std::endl;
      outStream << " - Menu                   Display menu." << std::endl;
      outStream << " - PrintTable             Prints the contents of the table"
                << std::endl;
      outStream << " - AddItem <key> <value>  Add an item into the table"
                << std::endl;
      outStream << " - DeleteItem <key>       Deletes an item from the table"
                << std::endl;
      outStream << " - GetItem <key>          Get an item from the table"
                << std::endl;
      outStream << " - ResizeTable <size>     Resize table" << std::endl;
      outStream << " - Quit                   Quit application." << std::endl;
    } else if (option == "PrintTable") {
      hashTable.printTable(outStream);
    } else if (option == "AddItem") {
      inStream >> key;
      inStream >> number;
      item.setValue(number);
      hashTable.insert(key, item);
      outStream << number << " was added to the list" << std::endl;
    } else if (option == "DeleteItem") {
      inStream >> key;
      hashTable.remove(key);
      outStream << number << " was deleted from the list" << std::endl;
    } else if (option == "GetItem") {
      inStream >> key;
      itemPointer = hashTable.search(key);
      if (itemPointer == nullptr) {
        outStream << key << " was not found" << std::endl;
      } else {
        outStream << key << " has value " << itemPointer->getValue()
                  << std::endl;
      }
    } else if (option == "ResizeTable") {
      inStream >> number;
      hashTable.resizeTable(number);
      outStream << "Table was resized" << std::endl;
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