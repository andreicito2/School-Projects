/**
 * Project 3: USGS header file
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
#include <string>
#pragma once

class UsgsTree {
public:
  bridges::EarthquakeUSGS
  getSmallestQuake(bridges::BSTElement<float, bridges::EarthquakeUSGS> *root,
                   std::string color);
  // Function: Finds the smallest quake magnitude in a BST.
  // Pre:  BST has been initialized and populated.
  // Post: The smallest quake will be visualized and returned.

  bridges::EarthquakeUSGS
  getLargestQuake(bridges::BSTElement<float, bridges::EarthquakeUSGS> *root,
                  std::string color);
  // Function: Finds the largest quake magnitude in a BST.
  // Pre:  BST has been initialized and populated.
  // Post: The largest quake will be visualized and returned.

  int countRange(float min, float max,
                 bridges::BSTElement<float, bridges::EarthquakeUSGS> *root,
                 std::string color);
  // Function: Finds all nodes in the BST that are between the min and max
  // parameters. Pre:  BST has been initialized and populated. Post: Returns the
  // number of quakes in this range and visualizes them.

  int countByLocation(std::string location,
                      bridges::BSTElement<float, bridges::EarthquakeUSGS> *root,
                      std::string color);
  // Function:  Finds all nodes in the BST that in the specified location.
  // Pre:  BST has been initialized and populated.
  // Post: Returns the number of quakes in this location and visualizes them.

  int countWithStyle(bridges::BSTElement<float, bridges::EarthquakeUSGS> *root,
                     std::string colorVertex, std::string colorEdge);
  // Function: Updates all nodes and edges with a visualization.
  // Pre:  BST has been initialized and populated.
  // Post: Returns the number of quakes in the BST and visualizes them.

  void
  resetVisualization(bridges::BSTElement<float, bridges::EarthquakeUSGS> *root);
  // Function: Resets the BST visualization back to the defaults.
  // Pre:  BST has been initialized and populated.
  // Post: The BST has no visualizations.

  bool checkDefaultVisulization(
      bridges::BSTElement<float, bridges::EarthquakeUSGS> *root);
};
