/**
 * Project 3: USGS Tree student implementation
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
#include "usgs_tree.h"
#include <iostream>
#include <queue>
#include <string>
#include <vector>

// Function: Finds the smallest quake magnitude in a BST.
// Pre:  BST has been initialized and populated.
// Post: The smallest quake will be visualized and returned.
bridges::EarthquakeUSGS UsgsTree::getLargestQuake(
    bridges::BSTElement<float, bridges::EarthquakeUSGS> *root,
    std::string color) {
  // Your code goes here.

  // or
  auto searchV1 = root;
  while (searchV1->getRight() != nullptr) {
    searchV1 = searchV1->getRight();
  }

  searchV1->getVisualizer()->setColor(color);
  searchV1->getVisualizer()->setSize(40.0);
  return searchV1->getValue();

  // traverse to the right most node for biggest
}

// Function: Finds the largest quake magnitude in a BST.
// Pre:  BST has been initialized and populated.
// Post: The largest quake will be visualized and returned.
bridges::EarthquakeUSGS UsgsTree::getSmallestQuake(
    bridges::BSTElement<float, bridges::EarthquakeUSGS> *root,
    std::string color) {
  // Your code goes here.
  auto searchV1 = root;
  while (searchV1->getLeft() != nullptr) {
    searchV1 = searchV1->getLeft();
  }

  searchV1->getVisualizer()->setColor(color);
  searchV1->getVisualizer()->setSize(40.0);
  return searchV1->getValue();
  // travers to the left most node to get smallest
}

// Function: Finds all nodes in the BST that are between the min and max
// parameters.
// Pre:  BST has been initialized and populated.
// Post: Returns the number of quakes in this range and visualizes them.
int UsgsTree::countRange(
    float min, float max,
    bridges::BSTElement<float, bridges::EarthquakeUSGS> *root,
    std::string color) {
  //
  // function highlights the nodes whose quake magnitude falls within a range
  //
  // Your code goes here.
  // int counter = 0;
  auto tempV1 = root;
  // acount for root being both bigger and smaller than min and max
  if (tempV1 == nullptr) {
    return 0;
  } else {
    int count = 0;

    count += countRange(min, max, tempV1->getLeft(), color);
    count += countRange(min, max, tempV1->getRight(), color);
    if ((tempV1->getKey() <= max) && (tempV1->getKey() >= min)) {
      tempV1->getVisualizer()->setColor(color);
      tempV1->getVisualizer()->setSize(30.0);
      return count += 1;
    }

    return count;
  }
}

// Function:  Finds all nodes in the BST that in the specified location.
// Pre:  BST has been initialized and populated.
// Post: Returns the number of quakes in this location and visualizes them.
int UsgsTree::countByLocation(
    std::string location,
    bridges::BSTElement<float, bridges::EarthquakeUSGS> *root,
    std::string color) {
  /**
   * Highlights quakes by location
   * Good idea to set the label in the element
   */
  // Your code goes here.
  auto tempV1 = root;
  // acount for root being both bigger and smaller than min and max
  if (tempV1 == nullptr) {
    return 0;
  } else {
    int count = 0;

    count += countByLocation(location, tempV1->getLeft(), color);
    count += countByLocation(location, tempV1->getRight(), color);

    size_t Loc = tempV1->getValue().getLocation().find(location);
    if (Loc != string::npos) {
      tempV1->getVisualizer()->setColor(color);
      tempV1->getVisualizer()->setSize(30.0);
      return count += 1;
    }

    return count;
  }
}

// Function: Updates all nodes and edges with a visualization.
// Pre:  BST has been initialized and populated.
// Post: Returns the number of quakes in the BST and visualizes them.
int UsgsTree::countWithStyle(
    bridges::BSTElement<float, bridges::EarthquakeUSGS> *root,
    std::string colorVertex, std::string colorEdge) {
  // Your code goes here.
  auto tempV1 = root;
  // auto tempVL = tempV1->getLeft();
  // auto tempVR = tempV1->getRight();

  if (tempV1 == nullptr) {
    return 0;
  } else {
    int count = 1;
    tempV1->getVisualizer()->setColor(colorVertex);
    if (tempV1->getRight() != nullptr) {
      tempV1->getLinkVisualizer(tempV1->getRight())->setColor(colorEdge);
    }
    if (tempV1->getLeft() != nullptr) {
      tempV1->getLinkVisualizer(tempV1->getLeft())->setColor(colorEdge);
    }

    tempV1->getVisualizer()->setSize(20.0);
    count += countWithStyle(tempV1->getLeft(), colorVertex, colorEdge);
    count += countWithStyle(tempV1->getRight(), colorVertex, colorEdge);

    return count;
  }
  return 0;
}

// Function: Resets the BST visualization back to the defaults.
// Pre:  BST has been initialized and populated.
// Post: The BST has no visualizations.
void UsgsTree::resetVisualization(
    bridges::BSTElement<float, bridges::EarthquakeUSGS> *root) {
  // Your code goes here.
  // use countRange set collor to steelblue and use find min and max to set min
  // and max
  auto tempV1 = root;
  if (tempV1 == nullptr) {
    return;
  } else {
    tempV1->getVisualizer()->setColor("steelblue");
    tempV1->getVisualizer()->setSize(10.0);
    resetVisualization(tempV1->getLeft());
    resetVisualization(tempV1->getRight());
  }
}