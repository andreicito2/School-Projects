#include "breadth_first_search.h"
#include "graph.h"
#include <iostream>

void printGraph(Graph &graph) {
  // Show the graph's vertices and edges
  for (Vertex *vertex : graph.getVertices()) {
    std::cout << "Vertex: " << vertex->label << std::endl;

    // Show outgoing edges (flights from location)
    std::cout << "  Node(s) connected from " << vertex->label << ":"
              << std::endl;
    for (Edge *outgoingEdge : *graph.getEdgesFrom(vertex)) {
      std::cout << "   - " << vertex->label << " to ";
      std::cout << outgoingEdge->toVertex->label << std::endl;
    }

    // Show incoming edges (flights to location)
    std::cout << "  Node(s) connected to " << vertex->label << ":" << std::endl;
    for (Edge *incomingEdge : *graph.getEdgesTo(vertex)) {
      std::cout << "   - " << incomingEdge->fromVertex->label << " to ";
      std::cout << vertex->label << std::endl;
    }
  }
}

int main() {
  Graph peopleGraph;
  Vertex *vertexA = peopleGraph.addVertex("Joe");
  Vertex *vertexB = peopleGraph.addVertex("Eva");
  Vertex *vertexC = peopleGraph.addVertex("Taj");
  Vertex *vertexD = peopleGraph.addVertex("Chen");
  Vertex *vertexE = peopleGraph.addVertex("Lily");
  Vertex *vertexF = peopleGraph.addVertex("Jun");
  Vertex *vertexG = peopleGraph.addVertex("Ken");

  // Add graph edges
  peopleGraph.addUndirectedEdge(vertexA, vertexB); // Edge from Joe to Eva
  peopleGraph.addUndirectedEdge(vertexA, vertexC); // Edge from Joe to Taj
  peopleGraph.addUndirectedEdge(vertexB, vertexE); // Edge from Eva to Lily
  peopleGraph.addUndirectedEdge(vertexC, vertexD); // Edge from Taj to Chen
  peopleGraph.addUndirectedEdge(vertexC, vertexE); // Edge from Taj to Lily
  peopleGraph.addUndirectedEdge(vertexD, vertexF); // Edge from Chen to Jun
  peopleGraph.addUndirectedEdge(vertexE, vertexF); // Edge from Lily to Jun
  peopleGraph.addUndirectedEdge(vertexF, vertexG); // Edge from Jun to Ken

  // Ask the user for the starting person's name
  std::cout << "Enter the starting person's name: ";
  std::string startName;
  getline(std::cin, startName);
  std::cout << std::endl;

  // Get the start vertex
  Vertex *startVertex = peopleGraph.getVertex(startName);

  if (startVertex) {
    std::unordered_map<Vertex *, double> vertexDistances;
    std::vector<Vertex *> visitedList =
        breadthFirstSearch(peopleGraph, startVertex, vertexDistances);

    // Output the result
    std::cout << "Breadth-first search traversal" << std::endl;
    std::cout << "Start vertex: " << startVertex->label << std::endl;
    for (Vertex *vertex : visitedList) {
      std::cout << vertex->label << ": " << vertexDistances[vertex]
                << std::endl;
    }
  } else {
    std::cout << "Start vertex \"" << startName << "\" not found" << std::endl;
  }
}
