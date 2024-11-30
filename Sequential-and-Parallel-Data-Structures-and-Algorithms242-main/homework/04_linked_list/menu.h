/**
 * Assignment: Test driver for Search
 */
#pragma once

#include "unsorted.h"
#include <fstream>
#include <string>

std::ostream &operator<<(std::ostream &os, const UnsortedType &list);

void menu(std::istream &inStream, std::ostream &outStream,
             const std::string &outputLabel);
