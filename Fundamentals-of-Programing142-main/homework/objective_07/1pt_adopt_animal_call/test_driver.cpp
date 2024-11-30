/**
 * Implement your function in the file identification.h
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "adopt.h"
#include "animal.h"
#include <iostream>

int main() {
  Animal myZebra = Animal("zebra", 5);
  adoptAnimal(myZebra, "Strips");
  myZebra.printTag();
}
