# CPTR 142: Objective #7 (2 point)

## Problem Overview

Create a class with definition and implement the methods.

## Description

A `GuessingGame` class must be created to create a secret number and then allow guess to be made.
Each guess will result in one of the following responses:

* Zero - the **correct** guess
* Positive number - the guess is to **high**
* Negative number - the guess is to **low**

The game play has been added to `test_driver.cpp`.

## Solution Specification

Your program should support the following features:

1. You must create a `GuessingGame` class with these methods:

    * A constructor that has one integer parameter for the random seed.

    * A `guess` method that takes one integer parameter and returns an integer based on the responses above:

        * 0: the **correct** guess
        * 1: the guess is to **high**
        * -1: the guess is to **low**

1. The class definition should be in `guessing_game.h` and the class method definitions should be in `guessing_game.cpp`.

1. You must pick a random number using the seed value and save it to a private class variable.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `guessing_game.h` and `guessing_game.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `GuessingGame` class which you could implement in `test_driver.cpp` to test your function.

**C++ Code**
Review the code in `test_driver.cpp`.

**Output**
```sh
========== GUESSING GAME ==========
What number will you like to guess: 50
Your guess is too low!
What number will you like to guess: 75
Your guess is too low!
What number will you like to guess: 87
Your guess is too high!
What number will you like to guess: 81
Your guess is too low!
What number will you like to guess: 84
You guess the correct number!
You used 5 guesses.
```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
