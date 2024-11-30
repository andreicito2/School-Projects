#include "graph.h"
#include <iostream>
#include <queue>

std::vector<Vertex *>
breadthFirstSearch(Graph &graph, Vertex *startVertex,
                   std::unordered_map<Vertex *, double> &distances) {
  std::unordered_set<Vertex *> discoveredSet;
  std::queue<Vertex *> frontierQueue;
  std::vector<Vertex *> visitedList;

  // Add your code here
  distances[startVertex] = 0.0;
  frontierQueue.push(startVertex);
  discoveredSet.insert(startVertex);

  while (frontierQueue.size() > 0) {
    Vertex *currentVertex = frontierQueue.front();
    frontierQueue.pop();
    visitedList.push_back(currentVertex);
    for (Edge *edge : *graph.getEdgesFrom(currentVertex)) {
      Vertex *adjacentVertex = edge->toVertex;
      if (0 == discoveredSet.count(adjacentVertex)) {
        frontierQueue.push(adjacentVertex);
        discoveredSet.insert(adjacentVertex);

        distances[adjacentVertex] = distances[currentVertex] + 1;
      }
    }
  }

  return visitedList;
}
