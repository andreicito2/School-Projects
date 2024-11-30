/**
 * Assignment 7: Menu implementation
 */
#include "menu.h"
#include "item_type.h"
#include "priority_queue_type.h"
#include <fstream>
#include <iostream>

void menu(std::istream &inStream, std::ostream &outStream,
          const std::string &outputLabel) {
  // operation to be executed
  std::string option;

  ItemType item;
  PriorityQueueType<ItemType> queue(7);
  int number;

  std::ofstream logStream;
  logStream.open("log.txt");

  outStream << outputLabel << std::endl;
  inStream >> option;

  int numCommands = 0;
  while (option != "Quit") {
    try {
      if (option == "Menu") {
        outStream << "Menu options:" << std::endl;
        outStream << " - Menu               Display menu." << std::endl;
        outStream << " - Enqueue            Adds item to queue using recursion."
                  << std::endl;
        outStream
            << " - Dequeue            Removes item to queue using recursion."
            << std::endl;
        outStream << " - EnqueueIterative   Adds item to queue using iteration."
                  << std::endl;
        outStream
            << " - DequeueIterative   Removes item to queue using iteration."
            << std::endl;
        outStream << " - IsEmpty            Returns whether queue is empty."
                  << std::endl;
        outStream
            << " - MakeEmpty          Returns the queue to the empty state."
            << std::endl;
        outStream << " - IsFull             Returns whether queue is full."
                  << std::endl;
        outStream << " - PrintHeap          Prints heap as an array."
                  << std::endl;
        outStream << " - Quit               Quit application." << std::endl;
      } else if (option == "Enqueue") {
        inStream >> number;
        item.setValue(number);
        queue.enqueue(item);
        outStream << item << " is enqueued." << std::endl;
      } else if (option == "Dequeue") {
        queue.dequeue(item);
        outStream << item << " is dequeued." << std::endl;
      } else if (option == "EnqueueIterative") {
        inStream >> number;
        item.setValue(number);
        queue.enqueueIterative(item);
        outStream << item << " is enqueued (iterative)." << std::endl;
      } else if (option == "DequeueIterative") {
        queue.dequeueIterative(item);
        outStream << item << " is dequeued (iterative)." << std::endl;
      } else if (option == "IsEmpty") {
        if (queue.isEmpty()) {
          outStream << "Queue is empty." << std::endl;
        } else {
          outStream << "Queue is not empty." << std::endl;
        }
      } else if (option == "IsFull") {
        if (queue.isFull()) {
          outStream << "Queue is full." << std::endl;
        } else {
          outStream << "Queue is not full." << std::endl;
        }
      } else if (option == "MakeEmpty") {
        queue.makeEmpty();
        outStream << "Queue is now Empty." << std::endl;
      } else if (option == "PrintHeap") {
        queue.printHeap(outStream);
        outStream << std::endl;
      } else {
        outStream << option << " is not a valid command." << std::endl;
        logStream << "Invalid ";
      }
    } catch (FullPriorityQueue) {
      outStream << "FullQueue exception thrown." << std::endl;
    } catch (EmptyPriorityQueue) {
      outStream << "EmtpyQueue exception thrown." << std::endl;
    }
    numCommands++;
    logStream << option << " is the " << numCommands << " command completed."
              << std::endl;
    inStream >> option;
  }
  logStream << "Quit" << std::endl << "Testing completed." << std::endl;
}