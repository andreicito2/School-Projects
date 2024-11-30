/**
 * Project 2: ImdbGraph student implementation file
 */
#include "Element.h"
#include <unordered_map>
#include <vector>
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
#pragma GCC diagnostic ignored "-Wsign-compare"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-variable"
#include "Bridges.h"
#include "DataSource.h"
#include "GraphAdjList.h"
#include "SLelement.h"
#include "data_src/ActorMovieIMDB.h"

#pragma GCC diagnostic pop
#include "imdb_graph.h"
#include <iostream>
#include <limits.h>
#include <queue>
#include <stdio.h>
#include <string>
// Constructor
ImdbGraph::ImdbGraph() {}

// Destructor
ImdbGraph::~ImdbGraph() {}

// Function: Adds a vertex to the graph.
// Pre:  Graph has been initialized.
// Post: The actor or movie will be added as a vertex.
//          No duplicate vertics will be created.
void ImdbGraph::addVertex(std::string actorOrMovie) {
  // Your code goes here.
  const bridges::Element<std::string> *vertex = graph.getVertex(actorOrMovie);
  if (vertex == nullptr) {
    graph.addVertex(actorOrMovie);
  }
}

// Function: Adds a edge to the graph.
// Pre:  Graph has been initialized.
//          Vertics have been already added to the graph.
// Post: The actor movie edge will be added to the graph.
//          No duplicate edges will be created.
void ImdbGraph::addEdge(std::string actorOrMovie, std::string movieOrActor) {
  // Your code goes here.
  if (!graph.isEdge(actorOrMovie, movieOrActor)) {
    graph.addEdge(actorOrMovie, movieOrActor);
  }
  if (!graph.isEdge(movieOrActor, actorOrMovie)) {
    graph.addEdge(movieOrActor, actorOrMovie);
  }
}

// Function: Updates the visualization for to vertex.
// Pre:  Graph has been initialized.
//          Vertex is in the graph.
// Post: The vertex will display the new color.
void ImdbGraph::setVertexColor(std::string actorOrMovie, std::string color) {
  // Your code goes here.

  if (graph.getVertex(actorOrMovie) != nullptr) {
    graph.getVisualizer(actorOrMovie)->setColor(color);
    graph.getVisualizer(actorOrMovie)->setSize(50);
  }

  // graph.getVisualizer(actorOrMovie)->setColor(color);
}

// Function: Updates the visualization for to edge.
// Pre:  Graph has been initialized.
//          Edge is in the graph.
// Post: The edge will display the new color.
void ImdbGraph::setEdgeColor(std::string actorOrMovie,
                             std::string movieOrActor2, std::string color) {
  // Your code goes here.

  if (graph.isEdge(actorOrMovie, movieOrActor2)) {
    graph.getLinkVisualizer(actorOrMovie, movieOrActor2)->setColor(color);
    graph.getLinkVisualizer(movieOrActor2, actorOrMovie)->setColor(color);
  }
  if (graph.isEdge(movieOrActor2, actorOrMovie)) {
    graph.getLinkVisualizer(actorOrMovie, movieOrActor2)->setColor(color);
    graph.getLinkVisualizer(movieOrActor2, actorOrMovie)->setColor(color);
  }
}

// Function: Resets all visualizations to the default.
// Pre:  Graph has been initialized.
// Post: The vertics and edges will display the default color.
void ImdbGraph::resetVisualizer() {
  // Your code goes here.
  // set all to the same color
  // iterate over all the graph and set to defalut

  // graph.getVisualizer(graph)->setColor("cyan");

  for (auto vert : graph.keySet()) {
    graph.getVisualizer(vert)->setColor("steelblue");
    for (auto &edge : graph.outgoingEdgeSetOf(vert)) {
      string fromV1 = edge.from(), toV1 = edge.to();
      graph.getLinkVisualizer(fromV1, toV1)->setColor("steelblue");
      graph.getLinkVisualizer(toV1, fromV1)->setColor("steelblue");
    }
  }

  //   for (string* aa : graph.getVertices()) {
  //     graph.getVisualizer(aa)->setColor()/*Color()*/;
  //   }

  // graph.getVisualizer()->setColor("cyan");
}

// Function: Calculates the Bacon Number for two actors.
//           In addition to returning the number, the graph is update to
//           highlight the path.
//           https://en.wikipedia.org/wiki/Six_Degrees_of_Kevin_Bacon
// Pre:  Graph has been initialized.
//          Vertices are in the graph.
//          Edges connect the actors in the graph.
// Post: The number returned will be lowest number of actor connections used to
// connect them.
//          The graph will visually show the path to connect the actors.

int ImdbGraph::getBaconNumber(std::string sourceActor,
                              std::string destinationActor) {
  // Your code goes here.
  unordered_map<string, int> distance;
  set<string> visited;
  queue<string> q;
  unordered_map<string, string> AllPathes;
  vector<string> path;
  q.push(sourceActor);
  distance[sourceActor] = 0;

  while (!q.empty()) {
    string currentActorOrMovie = q.front();
    q.pop();

    if (currentActorOrMovie == destinationActor) {
      while (currentActorOrMovie != sourceActor) {
        path.push_back(currentActorOrMovie);
        currentActorOrMovie = AllPathes[currentActorOrMovie];
      }
      path.push_back(sourceActor);
      reverse(path.begin(), path.end());
      for (int i = 0; i < distance[destinationActor]; i++) {
        setVertexColor(path[i], "red");
        setEdgeColor(path[i], path[i + 1], "red");
      }
      setVertexColor(destinationActor, "red");
      return (distance[destinationActor]) / 2;
    }

    for (bridges::SLelement<bridges::Edge<std::string>> *temp1 =
             graph.getAdjacencyList(currentActorOrMovie);
         temp1 != nullptr; temp1 = temp1->getNext()) {
      bridges::Edge<std::string> tempEdge = temp1->getValue();
      string movie = tempEdge.from();
      string nextActorOrMovie = tempEdge.to();

      if (visited.find(nextActorOrMovie) == visited.end()) {
        q.push(nextActorOrMovie);
        distance[nextActorOrMovie] = distance[currentActorOrMovie] + 1;
        AllPathes[nextActorOrMovie] = currentActorOrMovie;
        visited.insert(nextActorOrMovie);
      }
    }
  }

  return -1;
}
