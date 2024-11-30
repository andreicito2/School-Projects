/**
 * Menu implementation
 */
#include "optimized_linear_search.h"
#include "item_type.h"
#include "linear_search.h"
#include <cctype>
#include <fstream>
#include <iostream>
#include <string>

std::ostream &operator<<(std::ostream &os, const std::vector<ItemType> &input) {
  os << "[";
  bool first = true;
  for (auto const &i : input) {
    if (first) {
      first = false;
    } else {
      os << ", ";
    }
    os << i;
  }
  os << "]";
  return os;
}

inline bool fileExists(const std::string &name) {
  if (FILE *file = fopen(name.c_str(), "r")) {
    fclose(file);
    return true;
  } else {
    return false;
  }
}

void menu(std::istream &inStream, std::ostream &outStream,
         const std::string &outputLabel) {

  std::string option;       // operation to be executed
  std::ifstream listInFile; // file list data
  std::string data;         // data to be loaded

  int number;
  ItemType item;
  std::vector<ItemType> list;
  int location;
  LinearSearch linearSearch;
  OptimizedLinearSearch optimizedLinearSearch;

  std::ofstream logStream;
  logStream.open("log.txt");

  outStream << outputLabel << std::endl;
  inStream >> option;

  int numCommands = 0;
  while (option != "Quit") {
    if (option == "Menu") {
      outStream << "Menu options:" << std::endl;
      outStream << " - Menu                     Display menu." << std::endl;
      outStream
          << " - LinearSupport            May use Linear Search Algorithm."
          << std::endl;
      outStream << " - LinearSearch <key>       Uses Linear Search Algorithm "
                   "to find key."
                << std::endl;
      outStream
          << " - OptimizedLinearSupport            May use Binary Search Algorithm."
          << std::endl;
      outStream << " - OptimizedLinearSearch <key>       Uses Binary Search Algorithm "
                   "to find key."
                << std::endl;
      outStream
          << " - LoadListFromFile <data>  Loads data stored in a text file"
          << std::endl;
      outStream << " - GetLength                Returns size of list"
                << std::endl;
      outStream << " - MakeEmpty                Clears List" << std::endl;
      outStream << " - PrintList                Prints out list" << std::endl;
      outStream << " - Quit                     Quit application." << std::endl;
    } else if (option == "LinearSupport") {
      if (linearSearch.meetsRequirements(list)) {
        outStream << "List supports linear search." << std::endl;
      } else {
        outStream << "List does not support linear search." << std::endl;
      }
    } else if (option == "OptimizedLinearSupport") {
      if (optimizedLinearSearch.meetsRequirements(list)) {
        outStream << "List supports optimized linear search." << std::endl;
      } else {
        outStream << "List does not support optimized linear search." << std::endl;
      }
    } else if (option == "LinearSearch") {
      inStream >> number;
      item.setValue(number);
      location = linearSearch.indexOf(list, item);
      outStream << item;
      if (location >= 0) {
        outStream << " was found at " << location << " in list." << std::endl;
      } else {
        outStream << " is not in list." << std::endl;
      }
      outStream << "Linear search performed " << linearSearch.getComparisons()
                << " comparisons." << std::endl;
    } else if (option == "OptimizedLinearSearch") {
      inStream >> number;
      item.setValue(number);
      location = optimizedLinearSearch.indexOf(list, item);
      outStream << item;
      if (location >= 0) {
        outStream << " was found at " << location << " in list." << std::endl;
      } else {
        outStream << " is not in list." << std::endl;
      }
      outStream << "Optimized linear search performed " << optimizedLinearSearch.getComparisons()
                << " comparisons." << std::endl;
    } else if (option == "LoadListFromFile") {
      inStream >> data;
      listInFile.close();
      listInFile.clear();

      // Checks for Type of Input Files (Testing Version / Student Version)
      if (!fileExists(data) && ((data.find("/") != std::string::npos) == 0)) {
        // Change path for local testing.
        data = "../test_input/" + data;
      }
      listInFile.open(data.c_str());
      if (!listInFile) {
        std::cout << "Data file not found." << std::endl;
        return;
      }
      listInFile >> number;
      while (number > 0) {
        item.setValue(number);
        list.push_back(item);
        listInFile >> number;
      }
      outStream << data << " has loaded " << list.size() << " items."
                << std::endl;
    } else if (option == "GetLength") {
      outStream << "Length is " << list.size() << std::endl;
    } else if (option == "MakeEmpty") {
      list.clear();
      outStream << "List has been cleared " << std::endl;
    } else if (option == "PrintList") {
      outStream << list << std::endl;
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
