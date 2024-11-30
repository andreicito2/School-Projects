/**
 * Assignment 8: DeleteVertex and DeleteEdge implementation
 */
#include "graph_type.h"

template <class VertexType>
void GraphType<VertexType>::deleteVertex(VertexType vertex1) {
  // Your code goes here.
  // find all vetex
  for (int i = 0; i < numVertices; i++) {
    deleteEdge(vertex1, vertices[i]);
    deleteEdge(vertices[i], vertex1);
  }
  // delet all vertex

  // get deleted vertex
  int index = indexIs(vertex1);
  vertices[index] = 0;
  addUnusedVertex(vertex1);
  unusedVertices.makeEmpty();
}

template <class VertexType>
void GraphType<VertexType>::deleteEdge(VertexType vertex1, VertexType vertex2) {
  // Your code goes here.
  addEdge(vertex1, vertex2, 0);
}

template class GraphType<int>;