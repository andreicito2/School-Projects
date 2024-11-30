/**
 * Assignment 8: GraphType header file
 */
#pragma once

#include "queue_type.h"
#include <fstream>

const int NULL_EDGE = 0;

template <class VertexType>
// Assumption: VertexType is a type for which the "=",
// "==", and "<<" operators are defined
class GraphType {
public:
  GraphType();         // Default of 50 vertices
  GraphType(int maxV); // maxV <= 50
  ~GraphType();

  void addVertex(VertexType);
  void addEdge(VertexType, VertexType, int);
  int weightIs(VertexType, VertexType);
  void getToVertices(VertexType, QueueType<VertexType> &);
  int indexIs(VertexType);

  void addUnusedVertex(int index);

  void deleteEdge(VertexType, VertexType);
  // Pre:  vertex1 and vertex2 are in the set of vertices.
  // Post: (vertex1, vertex2) is not in the set of edges

  void deleteVertex(VertexType);
  // Pre: vertex1 is in the set of vertices
  // Post: vertex1 is not in the set of vertices

  void print(std::ostream &outStream);

private:
  int numVertices;
  int maxVertices;
  VertexType *vertices;
  int edges[50][50] = {};
  QueueType<VertexType> unusedVertices;
  bool *marks; // marks[i] is mark for vertices[i].
};
