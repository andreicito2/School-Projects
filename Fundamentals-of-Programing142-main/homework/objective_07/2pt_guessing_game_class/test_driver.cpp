/**
 * Implement your function in the file guessing_game.cpp
 *
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "guessing_game.h"
#include <iostream>

int main() {
  GuessingGame game = GuessingGame(1);
  int user_guess;
  int guess_counter = 0;
  int result = -1;
  std::cout << "========== GUESSING GAME ==========" << std::endl;
  while (result != 0) {
    std::cout << "What number will you like to guess: ";
    std::cin >> user_guess;
    guess_counter++;

    result = game.guess(user_guess);
    if (result == 0) {
      std::cout << "You guess the correct number!" << std::endl;
    } else if (result > 0) {
      std::cout << "Your guess is too high!" << std::endl;
    } else {
      std::cout << "Your guess is too low!" << std::endl;
    }
  }
  std::cout << "You used " << guess_counter << " guesses." << std::endl;
  return 0;
}
