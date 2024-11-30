/**
 * Assignment: Test driver for Search
 */
#pragma once
#include "item_type.h"
#include <iostream>
#include <string>
#include <vector>

std::ostream &operator<<(std::ostream &os, const std::vector<ItemType> &input);

void menu(std::istream &inStream, std::ostream &outStream,
                   const std::string &outputLabel);
