/**
 * Project 2: Menu implementation
 */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
#pragma GCC diagnostic ignored "-Wsign-compare"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-variable"
#include "Array.h"
#include "Bridges.h"
#include "DataSource.h"
#include "SLelement.h"
#pragma GCC diagnostic pop
#include "bridges_user.h"
#include "imdb_graph.h"
#include "menu.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void menu(std::istream &inStream, std::ostream &outStream,
          const std::string &outputLabel, bool linkOutput) {
  // Used for test driver functionality.
  std::string option;

  // Used to interact with Actor/Movie graph.
  std::string vertex;
  std::string vertex2;
  std::string vertexColor, edgeColor;

  ImdbGraph imdbGraph;
  bool found; // For use with GetActor

  outStream << outputLabel << std::endl;
  inStream >> option;

  // create the Bridges object, set credentials
  BridgesUser bUser;
  bridges::Bridges bridges(bUser.getBridgesNumber(), bUser.getBridgesUserID(),
                           bUser.getBridgesAPIKey());

  bridges.setTitle("List with IMDB Actor/Movie Data");
  bridges.setDescription("Here the data is processed to be a graph of actors "
                         "with all movies they have been in.");
  bridges.postVisualizationLink(linkOutput);

  // get the actor movie IMDB data
  bridges::DataSource ds(&bridges);
  std::vector<bridges::ActorMovieIMDB> actorMovieImdb =
      ds.getActorMovieIMDBData();

  std::ofstream logStream;
  logStream.open("log.txt");

  // Test driver menu and options
  int numCommands = 0;
  while (option != "Quit") {
    if (option == "Menu") {
      outStream << "Menu options:" << std::endl;
      outStream << " - Menu.                                                 "
                   "Display menu."
                << std::endl;
      outStream << " - AddVertex <actorOrMovie>.                             "
                   "Add a vertex to the graph."
                << std::endl;
      outStream << " - AddActor <actorOrMovie>.                              "
                   "Add an actor to the graph."
                << std::endl;
      outStream << " - AddEdge <actorOrMovie> <actorOrMovie>.                "
                   "Add an edge to the graph."
                << std::endl;
      outStream << " - AddAll.                                               "
                   "Add all actors and movies to the graph."
                << std::endl;
      outStream << " - GetBaconNumber <actor1> <actor2>.                     "
                   "Calculate the Bacon Number."
                << std::endl;
      outStream << " - GetVertexColor <actorOrMovie>.                        "
                   "Returns vertex Color in hexadecimal."
                << std::endl;
      outStream << " - GetEdgeColor <actorOrMovie> <actorOrMovie>.           "
                   "Returns edge color in hexadecimal."
                << std::endl;
      outStream << " - SetVertexColor <actorOrMovie> <color>.                "
                   "Change the color of the vertex."
                << std::endl;
      outStream << " - SetEdgeColor <actorOrMovie> <actorOrMovie> <color>.   "
                   "Change the color of the edge."
                << std::endl;
      outStream << " - DoesVertexExist <actorOrMovie>.                       "
                   "Returns a boolean if vertex exists in graph."
                << std::endl;
      outStream
          << " - DoesEdgeExist <actorOrMovie> <actorOrMovie>.          Returns "
             "a boolean if edge exist between two vertices in graph."
          << std::endl;
      outStream
          << " - CheckDefaultVisualization.                            Returns "
             "a boolean if nodes in graph are reset to default values"
          << std::endl;
      outStream << " - ResetVisualizer.                                      "
                   "Reset the visualization of all edges and vertices."
                << std::endl;
      outStream << " - Visualize.                                            "
                   "Builds the bridges visualization and prints the URL."
                << std::endl;
      outStream << " - Quit.                                                 "
                   "Quit application."
                << std::endl;
    } else if (option == "AddVertex") {
      inStream >> vertex;
      imdbGraph.addVertex(vertex);
      outStream << "Vertex for " << vertex << " was added to the graph."
                << std::endl;
    } else if (option == "DoesVertexExist") {
      inStream >> vertex;
      found = imdbGraph.doesVertexExist(vertex);
      if (found) {
        outStream << " - Vertex {" << vertex << "} exists in the graph"
                  << std::endl;
      } else {
        outStream << " - Vertex {" << vertex << "} does not exist in the graph"
                  << std::endl;
      }
    } else if (option == "AddEdge") {
      inStream >> vertex;
      inStream >> vertex2;
      imdbGraph.addEdge(vertex, vertex2);
    } else if (option == "DoesEdgeExist") {
      inStream >> vertex;
      inStream >> vertex2;
      found = imdbGraph.doesEdgeExist(vertex, vertex2);
      if (found) {
        outStream << " - Edge from {" << vertex << "} to {" << vertex2
                  << "} has been correctly added to the graph" << std::endl;
      } else {
        outStream << " - Could not create Edge from {" << vertex << "} to {"
                  << vertex2 << "}" << std::endl;
      }
    } else if (option == "GetBaconNumber") {
      inStream >> vertex;
      inStream >> vertex2;
      int baconNumber = imdbGraph.getBaconNumber(vertex, vertex2);
      outStream << vertex << " and " << vertex2 << " have a Bacon Number of "
                << baconNumber << "." << std::endl;
    } else if (option == "SetVertexColor") {
      inStream >> vertex;
      inStream >> vertexColor;
      imdbGraph.setVertexColor(vertex, vertexColor);
    } else if (option == "GetVertexColor") {
      inStream >> vertex;
      vertexColor = imdbGraph.getVertexColor(vertex);
      outStream << "Vertex {" << vertex << "} has a color {" << vertexColor
                << "}" << std::endl;
    } else if (option == "SetEdgeColor") {
      inStream >> vertex;
      inStream >> vertex2;
      inStream >> edgeColor;
      imdbGraph.setEdgeColor(vertex, vertex2, edgeColor);
    } else if (option == "GetEdgeColor") {
      inStream >> vertex;
      inStream >> vertex2;
      edgeColor = imdbGraph.getEdgeColor(vertex, vertex2);
      outStream << "Vertex1: {" << vertex << "} & Vertex2: {" << vertex2
                << "} has an edge color of {" << edgeColor << "}" << std::endl;
    } else if (option == "ResetVisualizer") {
      imdbGraph.resetVisualizer();
    } else if (option == "CheckDefaultVisualization") {
      found = imdbGraph.checkDefaultVisualization(imdbGraph.getGraph());
      if (found) {
        outStream << "Graph has been correctly reset to default settings"
                  << std::endl;
      } else {
        outStream << "Graph has not been correctly reset to default settings"
                  << std::endl;
      }
    } else if (option == "Visualize") {
      // TODO remove after server has been fixed.
      bridges.setServer("clone");

      bridges::GraphAdjList<std::string> *graph = imdbGraph.getGraph();
      bridges.setDataStructure(graph);
      bridges.visualize();
      outStream << "Graph was visualized." << std::endl;
    } else if (option == "AddActor") {
      int movie_count = 0;
      inStream >> vertex;
      for (auto im : actorMovieImdb) {
        string actor = im.getActor();
        if (actor.compare(vertex) == 0) {
          string movie = im.getMovie();
          imdbGraph.addVertex(actor);
          imdbGraph.addVertex(movie);
          imdbGraph.addEdge(actor, movie);
          movie_count++;
        }
      }
      if (movie_count > 0) {
        outStream << "Actor " << vertex << " was found and " << movie_count
                  << " movies have been added." << std::endl;
      } else {
        outStream << "Actor " << vertex << " was NOT found." << std::endl;
      }
    } else if (option == "AddAll") {
      for (auto im : actorMovieImdb) {
        string actor = im.getActor();
        string movie = im.getMovie();
        imdbGraph.addVertex(actor);
        imdbGraph.addVertex(movie);
        imdbGraph.addEdge(actor, movie);
      }
      outStream << "All actors and movies have been added." << std::endl;
    } else {
      outStream << option << " is not a valid command." << std::endl;
      logStream << "Invalid ";
    }
    numCommands++;
    logStream << option << " is the " << numCommands << " command completed."
              << std::endl;
    inStream >> option;
  }
  logStream << "Quit" << std::endl << "Testing completed." << std::endl;
}
