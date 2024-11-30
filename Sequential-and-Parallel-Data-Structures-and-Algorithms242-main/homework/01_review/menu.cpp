/**
 * Menu implementation
 */
#include "menu.h"
#include "draw.h"
#include <fstream>
#include <iostream>
#include <string>

void menu(std::istream &inStream, std::ostream &outStream,
          const std::string &outputLabel) {
  std::string option; // operation to be executed
  // Used to interact with Draw.
  char character;
  int col;
  int row;
  int col2;
  int row2;

  Draw board;

  std::ofstream logStream;
  logStream.open("log.txt");

  outStream << outputLabel << std::endl;
  inStream >> option;

  int numCommands = 0;
  while (option != "Quit") {
    if (option == "Menu") {
      outStream << "Menu options:" << std::endl;
      outStream << "  DrawPoint <row> <col> <character>. Adds a point to the "
                   "GameBoard."
                << std::endl;
      outStream
          << "  DrawLine <row> <col> <row2> <col2> <character>. Adds a line to "
             "the GameBoard."
          << std::endl;
      outStream
          << "  DrawRectangle <row> <col> <row2> <col2> <character>. Adds a "
             "rectangle to the GameBoard."
          << std::endl;
      outStream << "  DrawFun. Adds a creative drawing to the GameBoard."
                << std::endl;
      outStream << "  Visualize. Draws the GameBoard." << std::endl;
      outStream << "  ResetVisualization. Reset the GameBoard to empty."
                << std::endl;
      outStream << "  Quit. Quit application." << std::endl;
      outStream << "  Menu. Display menu." << std::endl;
    } else if (option == "DrawPoint") {
      inStream >> row;
      inStream >> col;
      inStream >> character;

      board.drawPoint(row, col, character);
      outStream << "Draw " << character << " point at (" << row << "," << col
                << ")." << std::endl;
    } else if (option == "DrawLine") {
      inStream >> row;
      inStream >> col;
      inStream >> row2;
      inStream >> col2;
      inStream >> character;

      board.drawLine(row, col, row2, col2, character);
      outStream << "Draw " << character << " line from (" << row << "," << col
                << ") to (" << row2 << "," << col2 << ")." << std::endl;
    } else if (option == "DrawRectangle") {
      inStream >> row;
      inStream >> col;
      inStream >> row2;
      inStream >> col2;
      inStream >> character;

      board.drawRectangle(row, col, row2, col2, character);
      outStream << "Draw " << character << " rectangle from (" << row << ","
                << col << ") to (" << row2 << "," << col2 << ")." << std::endl;
    } else if (option == "DrawFun") {
      board.drawFun();
      outStream << "Draw "
                << "creative drawing." << std::endl;
    } else if (option == "ResetBoard") {
      board.resetVisualization();
      outStream << "Reset board." << std::endl;
    } else if (option == "Visualize") {
      board.visualization(outStream);
    } else {
      logStream << option << " is not a valid command." << std::endl;
    }
    numCommands++;
    logStream << option << " is the " << numCommands << " command completed."
              << std::endl;
    inStream >> option;
  }

  logStream << "Quit" << std::endl << "Testing completed." << std::endl;
}
