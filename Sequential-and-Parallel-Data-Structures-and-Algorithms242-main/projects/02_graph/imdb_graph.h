/**
 * Project 2: IMDB Actor and Movie Graph header file
 */
#pragma once

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
#pragma GCC diagnostic ignored "-Wsign-compare"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-variable"
#include "Bridges.h"
#include "GraphAdjList.h"
#pragma GCC diagnostic pop
#include <fstream>
#include <string>

// File ItemType.h must be provided by the user of this class.
//  ItemType.h must contain the following definitions:
//  MAX_ITEMS:     the maximum number of items on the list
//  ItemType:      the definition of the objects on the list
//  RelationType:  {LESS, GREATER, EQUAL}
//  Member function ComparedTo(ItemType item) which returns
//       LESS, if self "comes before" item
//       GREATER, if self "comes after" item
//       EQUAL, if self and item are the same

class ImdbGraph {
public:
  ImdbGraph();
  // Constructor

  ~ImdbGraph();
  // Destructor

  void addVertex(std::string actorOrMovie);
  // Function: Adds a vertex to the graph.
  // Pre:  Graph has been initialized.
  // Post: The actor or movie will be added as a vertex.
  //          No duplicate vertics will be created.

  void addEdge(std::string actorOrMovie, std::string movieOrActor);
  // Function: Adds a edge to the graph.
  // Pre:  Graph has been initialized.
  //          Vertics have been already added to the graph.
  // Post: The actor movie edge will be added to the graph.
  //          No duplicate edges will be created.

  void setVertexColor(std::string actorOrMovie, std::string color);
  // Function: Updates the visualization for to vertex.
  // Pre:  Graph has been initialized.
  //          Vertex is in the graph.
  // Post: The vertex will display the new color.

  void setEdgeColor(std::string actorOrMovie, std::string movieOrActor,
                    std::string color);
  // Function: Updates the visualization for to edge.
  // Pre:  Graph has been initialized.
  //          Edge is in the graph.
  // Post: The edge will display the new color.

  void resetVisualizer();
  // Function: Resets all visualizations to the default.
  // Pre:  Graph has been initialized.
  // Post: The vertics and edges will display the default color.

  int getBaconNumber(std::string actor1, std::string actor2);
  // Function: Calculates the Bacon Number for two actors.
  //           In addition to returning the number, the graph is update to
  //           highlight the path.
  //           https://en.wikipedia.org/wiki/Six_Degrees_of_Kevin_Bacon
  // Pre:  Graph has been initialized.
  //          Vertices are in the graph.
  //          Edges connect the actors in the graph.
  // Post: The number returned will be lowest number of actor connections used
  // to connect them.
  //          The graph will visually show the path to connect the actors.

  std::string getVertexColor(std::string actorOrMovie);

  bool doesVertexExist(std::string actorOrMovie);

  std::string getEdgeColor(std::string actorOrMovie1,
                           std::string actorOrMovie2);

  bool doesEdgeExist(std::string actorOrMovie1, std::string actorOrMovie2);

  bool checkDefaultVisualization(bridges::GraphAdjList<std::string> *graph);

  void print(std::ofstream &dataFile);

  bridges::GraphAdjList<std::string> *getGraph() { return &graph; }

private:
  bridges::GraphAdjList<std::string> graph;
};
