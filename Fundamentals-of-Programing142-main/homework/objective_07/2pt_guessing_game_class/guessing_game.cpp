/**
 * Intermediate: Create a program that mimics a guessing game
 */
#include "guessing_game.h"
#include <cstdlib>
// TODO Add your code here

int GuessingGame::guess(int user_guess) {
  int number;
  srand(this->num);
  int random = 1 + rand() % 100;
  if (random == user_guess) {
    number = 0;
    return number;
  } else if (random > user_guess) {
    number = -1;
    return number;

  } else if (random < user_guess) {
    number = 1;
    return number;
  }
  number = 0;
  return number;
}

GuessingGame::GuessingGame(int num) { this->num = num; }