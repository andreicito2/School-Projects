/**
 * Assignment 5: Menu header file
 */
#pragma once

#include "stack_type.h"
#include <fstream>
#include <string>

void menu(std::istream &inStream, std::ostream &outStream,
             const std::string &outputLabel);

void printStack(std::ostream &outStream, StackType &stack);
