/**
 * Beginner: Delete a pointer
 */
#include "reset_pointer.h"

// Your code goes here
void resetPointer(int *&pointer) {

  delete pointer;
  pointer = nullptr;
}