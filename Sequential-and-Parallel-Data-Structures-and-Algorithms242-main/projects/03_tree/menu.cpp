/**
 * Project 3: Menu implementation
 */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
#pragma GCC diagnostic ignored "-Wsign-compare"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-variable"
#include "BSTElement.h"
#include "Bridges.h"
#include "DataSource.h"
#include "data_src/EarthquakeUSGS.h"
#pragma GCC diagnostic pop
#include "bridges_user.h"
#include "bst.h"
#include "menu.h"
#include "usgs_tree.h"
#include <fstream>
#include <iostream>
#include <string>

bool includeEarthQuake(bridges::EarthquakeUSGS eq) {
  int YEAR = 2021;
  int MONTH = 5;
  int DAY = 25;
  if (eq.getYear() < YEAR) {
    return true;
  } else if (eq.getMonth() < (MONTH - 1)) {
    return true;
  } else if (eq.getMonth() == (MONTH - 1) && eq.getDay() <= DAY) {
    return true;
  }
  return false;
}

void menu(std::istream &inStream, std::ostream &outStream,
          const std::string &outputLabel, bool linkOutput) {
  // Used for test driver functionality.
  std::string option;

  // Used to interact with BST.
  std::string color;
  std::string color2;
  std::string location;
  bridges::EarthquakeUSGS usgsRecord;
  float min;
  float max;
  int count;

  bool test;

  // Prepare files
  outStream << outputLabel << std::endl;
  inStream >> option;

  // create the Bridges object, set credentials
  BridgesUser bUser;
  bridges::Bridges bridges(bUser.getBridgesNumber(), bUser.getBridgesUserID(),
                           bUser.getBridgesAPIKey());

  // read the earth quake  data and build the BST
  bridges.setTitle("Recent Earthquakes (USGIS Data)");
  bridges.setDescription("The tree created from earthquake magnitudes.");
  bridges.postVisualizationLink(linkOutput);

  UsgsTree tree;

  bridges::DataSource ds(&bridges);
  BST<float, bridges::EarthquakeUSGS> bst;

  std::ofstream logStream;
  logStream.open("log.txt");

  // Test driver menu and options
  int numCommands = 0;
  while (option != "Quit") {
    if (option == "Menu") {
      outStream << "Menu options:" << std::endl;
      outStream << " - Menu. Display menu." << std::endl;
      outStream << " - BuildTree <size>.                     Adds all "
                   "earthquakes to the tree."
                << std::endl;
      outStream << " - SmallestQuake <color>.                Finds the "
                   "smallest quake in the tree."
                << std::endl;
      outStream << " - LargestQuake <color>.                 Finds the largest "
                   "quake in the tree."
                << std::endl;
      outStream << " - CountRange <min> <max> <color>.       Finds the all "
                   "quakes in a given range in the tree."
                << std::endl;
      outStream << " - CountByLocation <location> <color>.   Finds the all "
                   "quakes for this location in the tree."
                << std::endl;
      outStream << " - CountTreeInStyle <color1> <color2>.   Style the tree "
                   "and count all quakes in the tree."
                << std::endl;
      outStream << " - Visualize.                            Builds the "
                   "bridges visualization and prints the URL."
                << std::endl;
      outStream << " - ResetVisualization.                   Reset the "
                   "visualization of all tree nodes and edges."
                << std::endl;
      outStream << " - ResetTree.                            Remove all items "
                   "from the tree."
                << std::endl;
      outStream << " - Quit.                                 Quit application."
                << std::endl;
    } else if (option == "SmallestQuake") {
      inStream >> color;
      usgsRecord = tree.getSmallestQuake(bst.getRoot(), color);
      outStream << "The smallest quake was a " << usgsRecord.getMagnitude()
                << " in " << usgsRecord.getLocation() << "." << std::endl;
    } else if (option == "LargestQuake") {
      inStream >> color;
      usgsRecord = tree.getLargestQuake(bst.getRoot(), color);
      outStream << "The largest quake was a " << usgsRecord.getMagnitude()
                << " in " << usgsRecord.getLocation() << "." << std::endl;
    } else if (option == "CountRange") {
      inStream >> min;
      inStream >> max;
      inStream >> color;
      count = tree.countRange(min, max, bst.getRoot(), color);
      outStream << "The tree has " << count << " quakes between " << min
                << " and " << max << "." << std::endl;
    } else if (option == "CountByLocation") {
      inStream >> location;
      inStream >> color;
      count = tree.countByLocation(location, bst.getRoot(), color);
      outStream << location << " has " << count << " quakes." << std::endl;
    } else if (option == "CountTreeInStyle") {
      inStream >> color;
      inStream >> color2;
      count = tree.countWithStyle(bst.getRoot(), color, color2);
      outStream << "The tree has " << count << " quakes." << std::endl;
    } else if (option == "ResetVisualization") {
      tree.resetVisualization(bst.getRoot());

      test = tree.checkDefaultVisulization(bst.getRoot());
      if (test) {
        outStream << "Tree has been reset correctly" << std::endl;
      } else {
        outStream << "Tree has not been reset correctly" << std::endl;
      }
    } else if (option == "Visualize") {
      bridges.setDataStructure(bst.getRoot());
      bridges.visualize();
      outStream << "Tree was visualized." << std::endl;
    } else if (option == "BuildTree") {
      inStream >> count;
      int countWithBuffer = 5000;
      std::vector<bridges::EarthquakeUSGS> eq_list =
          ds.getEarthquakeUSGSData(countWithBuffer);
      int k = 0;
      for (int kBuffer = 0; kBuffer < countWithBuffer && k < count; kBuffer++) {
        bridges::EarthquakeUSGS eq = eq_list[kBuffer];
        if (includeEarthQuake(eq)) {
          bst.insert(eq.getMagnitude(), eq, eq.getLocation());
          k++;
        }
      }
      outStream << k << " quakes have been added." << std::endl;
    } else if (option == "ResetTree") {
      bst.clear();
      outStream << "Tree has been reset." << std::endl;
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
