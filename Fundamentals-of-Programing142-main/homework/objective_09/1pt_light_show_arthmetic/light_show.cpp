/**
 * Beginner: Arthmetic calculation using recursion.
 */
#include "light_show.h"

// Your code goes here
int getLightCount(int num) {
  if (num == 0) {
    return 1;
  } else {
    return num * getLightCount(num - 5);
  }
}
