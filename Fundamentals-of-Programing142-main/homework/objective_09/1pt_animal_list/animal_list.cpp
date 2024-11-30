/**
 * Beginner: Print the list in order.
 */
#include "animal_list.h"
#include <iostream>
#include <string>

// Your code goes here
void printAnimals(std::string anumal[], int num) {
  if (num == 0) {
    return;
  } else {

    printAnimals(anumal, num - 1);
    std::cout << anumal[num - 1] << std::endl;
  }
}