/**
 * Assignment 5: Menu implementation
 */
#include "menu.h"
#include "stack_type.h"
#include <fstream>
#include <iostream>
#include <string>

void menu(std::istream &inStream, std::ostream &outStream,
          const std::string &outputLabel) {
  std::string option; // operation to be executed

  ItemType item;
  ItemType itemNew;
  ItemType itemOld;
  char value;

  StackType stack;

  std::ofstream logStream;
  logStream.open("log.txt");

  outStream << outputLabel << std::endl;
  inStream >> option;

  int numCommands = 0;
  while (option != "Quit") {
    try {
      if (option == "Menu") {
        outStream << "Menu options:" << std::endl;
        outStream << " - Menu          Display menu." << std::endl;
        outStream << " - Push <item>   Adds an Item at the rear of stack"
                  << std::endl;
        outStream << " - Pop           Removes the first item in Stack"
                  << std::endl;
        outStream << " - Top           Returns the first item in Stack"
                  << std::endl;
        outStream << " - IsEmpty       Returns true if Stack is empty"
                  << std::endl;
        outStream << " - IsFull        Returns true if Stack "
                     "reached the max limit of items it can hold"
                  << std::endl;
        outStream << " - Print         Prints Stack" << std::endl;
        outStream << " - MakeEmpty     Clears Stack" << std::endl;
        outStream << " - Quit          Quit application." << std::endl;
      } else if (option == "Push") {
        inStream >> value;
        item.setValue(value);
        stack.push(item);
        outStream << item << " is pushed." << std::endl;
      } else if (option == "Pop") {
        stack.pop();
        outStream << "Stack has been pop. " << std::endl;
      } else if (option == "Top") {
        item = stack.top();
        outStream << item << " is at the front." << std::endl;
      } else if (option == "IsEmpty") {
        if (stack.isEmpty()) {
          outStream << "Stack is empty." << std::endl;
        } else {
          outStream << "Stack is not empty." << std::endl;
        }
      } else if (option == "IsFull") {
        if (stack.isFull()) {
          outStream << "Stack is full." << std::endl;
        } else {
          outStream << "Stack is not full." << std::endl;
        }
      } else if (option == "Print") {
        outStream << stack;
      } else if (option == "MakeEmpty") {
        outStream << "Stack is now Empty." << std::endl;
        stack.makeEmpty();
      } else {
        outStream << option << " is not a valid command." << std::endl;
        logStream << "Invalid ";
      }
    } catch (FullStack) {
      outStream << "FullStack exception thrown." << std::endl;
    } catch (EmptyStack) {
      outStream << "EmptyStack exception thrown." << std::endl;
    }
    numCommands++;
    logStream << option << " is the " << numCommands << " command completed."
              << std::endl;
    inStream >> option;
  }
  logStream << "Quit" << std::endl << "Testing completed." << std::endl;
}

void printStack(std::ostream &outStream, StackType &stack) {
  // Pre:  list has been initialized.
  //       dataFile is open for writing.
  // Post: Each component in list has been written to dataFile.
  //       dataFile is still open.
  QueueType tempQ;
  outStream << "PrintStack: ";

  if (stack.isEmpty()) {
    outStream << "Stack is empty.";
  }

  while (!stack.isEmpty()) {
    ItemType item = stack.top();
    outStream << item << " ";
    stack.pop();
    tempQ.enqueue(item);
  }
  // restore queue
  while (!tempQ.isEmpty()) {
    ItemType item;
    tempQ.dequeue(item);
    stack.push(item);
  }

  outStream << std::endl;
}
