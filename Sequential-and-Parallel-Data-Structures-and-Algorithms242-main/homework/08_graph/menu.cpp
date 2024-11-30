/**
 * Assignment 8: Menu implementation
 */
#include "menu.h"
#include "graph_type.h"
#include <fstream>
#include <iostream>
#include <string>

void menu(std::istream &inStream, std::ostream &outStream,
          const std::string &outputLabel) {
  // operation to be executed
  std::string option;

  GraphType<int> graph;
  int vertex1;
  int vertex2;
  int weight;

  std::ofstream logStream;
  logStream.open("log.txt");

  outStream << outputLabel << std::endl;
  inStream >> option;

  int numCommands = 0;
  while (option != "Quit") {
    try {
      if (option == "Menu") {
        outStream << "Select options:" << std::endl;
        outStream << " - Menu                                             "
                     "Display menu."
                  << std::endl;
        outStream << " - AddVertex <value>                                Add "
                     "vertice to the graph"
                  << std::endl;
        outStream
            << " - AddEdge <fromVertice> <toVertice> <edgeWeight>   Adds an "
               "edge from one vertice to the next, with a specified weight"
            << std::endl;
        outStream << " - WeightIs <fromVertice> <toVertice>               "
                     "Returns the weight of a specified edge"
                  << std::endl;
        outStream << " - DeleteEdge <fromVertice> <toVertice>             "
                     "Deletes the edge between two vertices"
                  << std::endl;
        outStream << " - DeleteVertex <vertice>                           "
                     "Deletes the specified vertice"
                  << std::endl;
        outStream << " - Print                                            "
                     "Print the graph details"
                  << std::endl;
        outStream << " - Quit                                             "
                     "Quit the program"
                  << std::endl;
      } else if (option == "AddVertex") {
        inStream >> vertex1;
        graph.addVertex(vertex1);
        outStream << "Vertex " << vertex1 << " was added." << std::endl;
      } else if (option == "AddEdge") {
        inStream >> vertex1;
        inStream >> vertex2;
        inStream >> weight;
        outStream << "Edge (" << vertex1 << ", " << vertex2 << ") with weight "
                  << weight << " has been created." << std::endl;
        graph.addEdge(vertex1, vertex2, weight);
      } else if (option == "WeightIs") {
        inStream >> vertex1;
        inStream >> vertex2;
        outStream << "Edge (" << vertex1 << ", " << vertex2 << ") has weight "
                  << weight << "." << std::endl;

        // Under construction!

        //   } else if (option == "GetToVertices") {
        //     outStream << "GetToVertices is not yet implemented." <<
        //     std::endl;

      } else if (option == "DeleteEdge") {
        inStream >> vertex1;
        inStream >> vertex2;
        graph.deleteEdge(vertex1, vertex2);
        outStream << "Edge (" << vertex1 << ", " << vertex2 << ") was deleted."
                  << std::endl;
      } else if (option == "DeleteVertex") {
        inStream >> vertex1;
        graph.deleteVertex(vertex1);
        outStream << "Vertex " << vertex1 << " was deleted." << std::endl;
      } else if (option == "Print") {
        graph.print(outStream);
      } else {
        outStream << option << " is not a valid command." << std::endl;
        logStream << "Invalid ";
       }
    } catch (FullQueue) {
      outStream << "FullQueue exception thrown." << std::endl;
    } catch (EmptyQueue) {
      outStream << "EmptyQueue exception thrown." << std::endl;
    }
    numCommands++;
    logStream << option << " is the " << numCommands << " command completed."
              << std::endl;
    inStream >> option;
  }
  logStream << "Quit" << std::endl << "Testing completed." << std::endl;
}
