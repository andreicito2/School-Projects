/**
 * Intermediate: Create a program that mimics a guessing game
 */
#pragma once

// TODO Add your code here

class GuessingGame {

public:
  GuessingGame(int num);
  int guess(int user_guess);

private:
  int comp_num;
  int num;
};