/**
 * Project 2: Menu header file
 */
#include "imdb_graph.h"
#include <iostream>
#include <string>

//  we will use this class to keep track of the number of movies that an
//     actor has appeared in; we will use that to color/size the nodes
struct ActorMovieObject {
  std::string movies;
  int numberOfMovies;
};

void menu(std::istream &inStream, std::ostream &outStream,
          const std::string &outputLabel, bool linkOutput);
