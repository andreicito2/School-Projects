/*************************************************************************
 *
 * In-Class Exercise: Using Vectors to Book Page Counts and More
 *
 * File Name: books.cpp
 * Course:    CPTR 142
 */

#include <iostream> // for std::cin and std::cout
#include <vector>   // for vectors
#include <string>
/*====================================================================
 * Main program
 */

int main() {

  // define the number of books to initially collect
 // const int NUM = 5;
// int numBooks;
// std::vector<std::string> titles;
// std::string tempbook;
// std::string junk;
// std::cout << "How many book to recodrd? ";
// std::cin >> numBooks;


// getline(std::cin, junk);
//   // loop to collect book and page information
//   for (int i = 0; i < numBooks; i++) {
//       std::cout << "titles" << (i+1) << ":";
//       getline(std:: cin, tempbook);
//       titles.push_back(tempbook);
//   }
// std::cout << "Your books are: " << std::endl;

//   for (int i = 0; i < numBooks; i++) {
// std::cout << " " << (i+1) << ". " << titles.at(i) << std::endl;
 
//   }

  // Pair Exercise: Let's Be Flexible
  //   Modify the program so that it does at allows the user to do at
  //   least one of the following:
  //     * add a new book/page to the vector
  //     * delete the book/page at a given index
  //     * change the page count for a given book by entering its index
  //   These should be in a loop that displays the longest book and
  //   the number of pages after each action and then prompts for
  //   a new action.

std::vector<std::string> titles = {" bbool 1", "bbok2", "book 3"}; 
char do_again = 'y';
int action;

do {
std::cout << "Action (1=add, 2=delete): ";
std::cin >> action;
int tempValue;
if (action == 1){
    //add section


}
else {
// delete section
std::cout <<"Delet Which book: ";
std::cin >> tempValue;


}



} while(do_again == 'y')











  return 0;
}