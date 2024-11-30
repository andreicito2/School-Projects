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
  // Create a new Graph object
  Graph graph1;

  // Add vertices and edges representing plane flights
  Vertex *vertexExample1 = graph1.addVertex("A");
  Vertex *vertexExample2 = graph1.addVertex("B");
  Vertex *vertexExample3 = graph1.addVertex("C");
  Vertex *vertexExample4 = graph1.addVertex("D");
  
  graph1.addUndirectedEdge(vertexExample1, vertexExample2, 1);
  graph1.addUndirectedEdge(vertexExample2, vertexExample3, 1);
  graph1.addUndirectedEdge(vertexExample2 , vertexExample4, 1);
  graph1.addUndirectedEdge(vertexExample1, vertexExample4, 1);
  // Your code goes here.

  std::cout << "Print undirected graph details" << std::endl;
  printGraph(graph1);

  // Create a new Graph object
  Graph graph2;

  // Add vertices and edges representing plane flights
  Vertex *vertexExampleA = graph2.addVertex("1");
  Vertex *vertexExampleB = graph2.addVertex("3");
  Vertex *vertexExampleC = graph2.addVertex("5");
  Vertex *vertexExampleD = graph2.addVertex("7");
  Vertex *vertexExampleE = graph2.addVertex("9");
  Vertex *vertexExampleF = graph2.addVertex("11");
graph2.addDirectedEdge( vertexExampleB , vertexExampleA, 1);
graph2.addDirectedEdge( vertexExampleA , vertexExampleB, 1);
graph2.addDirectedEdge( vertexExampleF , vertexExampleA, 1);
graph2.addDirectedEdge( vertexExampleE , vertexExampleF, 1);
graph2.addDirectedEdge( vertexExampleE , vertexExampleE, 1);
graph2.addDirectedEdge( vertexExampleC , vertexExampleE, 1);
graph2.addDirectedEdge( vertexExampleC , vertexExampleD, 1);

  // Your code goes here.

  std::cout << std::endl << "Print directed graph details" << std::endl;
  printGraph(graph2);

  return 0;
}
