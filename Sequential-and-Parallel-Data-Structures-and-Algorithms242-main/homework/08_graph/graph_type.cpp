/**
 * Assignment 8: GraphType implementation
 */
#include "graph_type.h"

// Post: Arrays of size 50 are dynamically allocated for
//       marks and vertices.  numVertices is set to 0;
//       maxVertices is set to 50.
template <class VertexType> GraphType<VertexType>::GraphType() {
  numVertices = 0;
  maxVertices = 50;
  vertices = new VertexType[50];
  marks = new bool[50];
}

// Post: Arrays of size maxV are dynamically allocated for
//       marks and vertices.
//       numVertices is set to 0; maxVertices is set to maxV.
template <class VertexType> GraphType<VertexType>::GraphType(int maxV) {
  numVertices = 0;
  maxVertices = maxV;
  vertices = new VertexType[maxV];
  marks = new bool[maxV];
}

// Post: arrays for vertices and marks have been deallocated.
template <class VertexType> GraphType<VertexType>::~GraphType() {
  delete[] vertices;
  delete[] marks;
}

// Post: vertex has been stored in vertices.
//       Corresponding row and column of edges has been set to NULL_EDGE.
//       numVertices has been incremented.
template <class VertexType>
void GraphType<VertexType>::addVertex(VertexType vertex) {
  for (int i = 0; i < numVertices; i++) {
    if (vertices[i] == vertex) {
      // Vertex already added.
      return;
    }
  }

  int vertexToUse;

  if (!unusedVertices.isEmpty()) {
    unusedVertices.dequeue(vertexToUse);
    vertices[vertexToUse] = vertex;
  } else {
    vertexToUse = numVertices;
    vertices[vertexToUse] = vertex;
    numVertices++;
  }

  for (int index = 0; index < numVertices; index++) {
    edges[vertexToUse][index] = NULL_EDGE;
    edges[index][vertexToUse] = NULL_EDGE;
  }
}

// Post: Returns the index of vertex in vertices.
template <class VertexType>
int GraphType<VertexType>::indexIs(VertexType vertex) {
  int index = 0;

  while (!(vertex == vertices[index]))
    index++;
  return index;
}

template <class VertexType>
void GraphType<VertexType>::addUnusedVertex(int index) {
  unusedVertices.enqueue(index);
}

// Post: Edge (fromVertex, toVertex) is stored in edges.
template <class VertexType>
void GraphType<VertexType>::addEdge(VertexType fromVertex, VertexType toVertex,
                                    int weight) {
  int row;
  int col;

  row = indexIs(fromVertex);
  col = indexIs(toVertex);
  edges[row][col] = weight;
}

// Post: Returns the weight associated with the edge
//       (fromVertex, toVertex).
template <class VertexType>
int GraphType<VertexType>::weightIs(VertexType fromVertex,
                                    VertexType toVertex) {
  int row;
  int col;

  row = indexIs(fromVertex);
  col = indexIs(toVertex);
  return edges[row][col];
}

// Post: Returns the queue of the vertices to vertex.
template <class VertexType>
void GraphType<VertexType>::getToVertices(VertexType vertex,
                                          QueueType<VertexType> &adjVertices) {
  int fromIndex;
  int toIndex;

  fromIndex = indexIs(vertex);
  for (toIndex = 0; toIndex < numVertices; toIndex++) {
    if (edges[fromIndex][toIndex] != NULL_EDGE) {
      adjVertices.enqueue(vertices[toIndex]);
    }
  }
}

template <class VertexType>
void GraphType<VertexType>::print(std::ostream &outStream) {
  outStream << "  ";

  for (int x = 0; x < numVertices; x++) {
    if (vertices[x] != 0) {
      // Only print live vertices
      outStream << vertices[x] << " ";
    }
  }

  for (int x = 0; x < numVertices; x++) {
    if (vertices[x] != 0) {
      outStream << std::endl << vertices[x] << " ";
      for (int y = 0; y < numVertices; y++) {
        if (vertices[y] != 0) {
          outStream << edges[x][y] << " ";
        }
      }
    }
  }

  outStream << std::endl;
}

template class GraphType<int>;
