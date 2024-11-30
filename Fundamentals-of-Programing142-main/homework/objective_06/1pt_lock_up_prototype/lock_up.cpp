/**
 * Function definitions.
 *
 * DO NOT EDIT FILE
 * Changes will not be considered during grading.
 */
#include "lock_up.h"
#include <vector>

void lock(std::vector<bool> &doors, int door) { doors.at(door) = true; }

void unlock(std::vector<bool> &doors, int door) { doors.at(door) = false; }
