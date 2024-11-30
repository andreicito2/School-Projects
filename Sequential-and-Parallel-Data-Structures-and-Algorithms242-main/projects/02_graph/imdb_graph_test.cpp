/**
 * Project 2: IMDB Actor and Movie Validation Test
 */
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
#include <string>

bool ImdbGraph::doesVertexExist(std::string actorOrMovie) {
  unordered_map<std::string, bridges::Element<std::string> *> *vertices =
      graph.getVertices();
  return vertices->find(actorOrMovie) != vertices->end();
}

std::string ImdbGraph::getVertexColor(std::string actorOrMovie) {
  unordered_map<std::string, bridges::Element<std::string> *> *vertices =
      graph.getVertices();
  bool vertexMatch = (vertices->find(actorOrMovie) != vertices->end());
  if (vertexMatch) {
    return graph.getVisualizer(actorOrMovie)->getColor().getHexValue();
  } else {
    return "NA";
  }
}

bool ImdbGraph::doesEdgeExist(std::string actorOrMovie1,
                              std::string actorOrMovie2) {
  unordered_map<std::string, bridges::Element<std::string> *> *vertices =
      graph.getVertices();
  bool vertexOneExist = (vertices->find(actorOrMovie1) != vertices->end());
  bool vertexTwoExist = (vertices->find(actorOrMovie2) != vertices->end());
  if (vertexOneExist && vertexTwoExist) {
    try {
      std::string vertexStart =
          graph.getEdge(actorOrMovie1, actorOrMovie2).from();
      std::string vertexEnd = graph.getEdge(actorOrMovie1, actorOrMovie2).to();
      return true;
    } catch (const char *ex) {
      return false;
    }
  }
  return false;
}

std::string ImdbGraph::getEdgeColor(std::string actorOrMovie1,
                                    string actorOrMovie2) {
  unordered_map<std::string, bridges::Element<std::string> *> *vertices =
      graph.getVertices();
  std::string edgeColor;
  bool vertexOneExist = (vertices->find(actorOrMovie1) != vertices->end());
  bool vertexTwoExist = (vertices->find(actorOrMovie2) != vertices->end());

  if (vertexOneExist && vertexTwoExist) {
    edgeColor =
        graph.getEdge(actorOrMovie1, actorOrMovie2).getColor().getHexValue();
  } else {
    edgeColor = "NA";
  }
  return edgeColor;
}

bool ImdbGraph::checkDefaultVisualization(
    bridges::GraphAdjList<std::string> *graph) {
  bridges::Color color, edgeColor;
  for (auto &vertex : *graph->getVertices()) {
    color = graph->getVisualizer(vertex.first)->getColor();
    if (color != bridges::Color("steelblue")) {
      return false;
    }
    // get adjacency list of vertex
    auto sl_list = graph->getAdjacencyList(vertex.first);
    for (auto sle = sl_list; sle != NULL; sle = sle->getNext()) {
      // get destination vertex
      auto destination = ((bridges::Edge<std::string>)sle->getValue()).to();
      edgeColor = graph->getEdge(vertex.first, destination).getColor();
      if (edgeColor != bridges::Color("steelblue")) {
        return false;
      }
    }
  }
  return true;
}
