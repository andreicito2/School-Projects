/**
 * Menu implementation
 */
#include "insertion_sort.h"
#include "item_type.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "selection_sort.h"
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

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

  InsertionSort sortInsertion;
  MergeSort sortMerge;
  QuickSort sortQuick;
  SelectionSort sortSelection;

  int number;
  ItemType item;
  std::vector<ItemType> list;

  std::ofstream logStream;
  logStream.open("log.txt");

  outStream << outputLabel << std::endl;
  inStream >> option;

  int numCommands = 0;
  while (option != "Quit") {
    if (option == "Menu") {
      outStream << "Menu options:" << std::endl;
      outStream << " - Menu.                     Display menu." << std::endl;
      outStream << " - InsertionSort.            Sorts list using a "
                   "InsertionSort Algorithm."
                << std::endl;
      outStream << " - MergeSort.                Sorts list using a "
                   "MergeSort Algorithm."
                << std::endl;
      outStream << " - QuickSort.                Sorts list using a "
                   "QuickSort Algorithm."
                << std::endl;
      outStream << " - SelectionSort.            Sorts list using a "
                   "SelectionSort Algorithm."
                << std::endl;
      outStream << " - LoadListFromFile <data>.  Loads a vector list from "
                   "the data file"
                << std::endl;
      outStream << " - GetLength.                Returns size of the list"
                << std::endl;
      outStream << " - MakeEmpty.                Clears List" << std::endl;
      outStream << " - PrintList.                Prints out list" << std::endl;
      outStream << " - Quit.                     Quit application."
                << std::endl;
    } else if (option == "InsertionSort") {
      sortInsertion.sort(list);
      outStream << "Insertion Sort performed " << sortInsertion.getComparisons()
                << " comparisons, " << sortInsertion.getWrites() << " writes."
                << std::endl;
    } else if (option == "MergeSort") {
      sortMerge.sort(list);
      outStream << "Merge Sort performed " << sortMerge.getComparisons()
                << " comparisons, " << sortMerge.getWrites() << " writes."
                << std::endl;
    } else if (option == "QuickSort") {
      sortQuick.sort(list);
      outStream << "Quick Sort performed " << sortQuick.getComparisons()
                << " comparisons, " << sortQuick.getWrites() << " writes."
                << std::endl;
    } else if (option == "SelectionSort") {
      sortSelection.sort(list);
      outStream << "Selection Sort performed " << sortSelection.getComparisons()
                << " comparisons, " << sortSelection.getWrites() << " writes."
                << std::endl;
    } else if (option == "LoadListFromFile") {
      inStream >> data;
      listInFile.close();
      listInFile.clear();

      // Checks for Type of Input Files (Testing Version / Student Version)
      if (!fileExists(data) && ((data.find("/") != std::string::npos) == 0)) {
        // Change path for local testing.
        data = ".test_input/" + data;
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
