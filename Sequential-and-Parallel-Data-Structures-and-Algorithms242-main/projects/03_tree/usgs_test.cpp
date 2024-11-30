/***
 * Project 3: USGS Test implementation
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
#include <queue>
#include <string>
#include <vector>

bool UsgsTree::checkDefaultVisulization(
    bridges::BSTElement<float, bridges::EarthquakeUSGS> *root) {
  if (root != nullptr) {
    if (root->getVisualizer()->getColor() !=
            bridges::datastructure::Color("steelblue") &&
        root->getVisualizer()->getSize() != 10.0) {
      return false;
    }
    return checkDefaultVisulization(root->getLeft()) &&
           checkDefaultVisulization(root->getRight());
  }
  return true;
}