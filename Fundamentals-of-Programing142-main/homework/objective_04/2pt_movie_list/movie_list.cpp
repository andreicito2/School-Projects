/*************************************************************************
 *
 * Objective 4: Collect information into two arrays (integer and string).
 *              Print out the total for the integer array and the values in the
 * string array.
 *
 * File Name: movie_list.cpp
 * UserID:    ?
 * Course:    CPTR 142
 *
 */

#include <iostream>
#include <string>
int main() {
  // define variables
  std::string movieList[3];
  int movieRuntime[3];
  // char junck;
  int min;
  int hours;
  // Prompt for and collect input
  std::cout << "Enter the movie title followed by running time in minutes "
               "(separated by a space):"
            << std::endl;
  std::cout << "  First Movie: ";
  std::cin >> movieList[0] >> movieRuntime[0];
  std::cout << "  Second Movie: ";
  std::cin >> movieList[1] >> movieRuntime[1];
  std::cout << "  Third Movie: ";
  std::cin >> movieList[2] >> movieRuntime[2];
  min = movieRuntime[0] + movieRuntime[1] + movieRuntime[2];
  std::cout << "The total running time for " << movieList[0] << ", "
            << movieList[1] << ", and " << movieList[2] << " is " << min
            << " minutes." << std::endl;
  hours = min / 60;
  min = min - (hours * 60);
  // report total time
  std::cout << "That is " << hours << " hours and " << min << " minutes."
            << std::endl;
  return 0;
}
