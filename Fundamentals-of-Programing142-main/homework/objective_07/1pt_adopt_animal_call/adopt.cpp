/**
 * Beginner: Call class member functions.
 */

#include "animal.h"
void adoptAnimal(Animal &animal, std::string name) {
  // TODO Add your code here
  animal.adopt();
  animal.setName(name);
}
