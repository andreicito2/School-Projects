# CPTR 141: Homework Assignment #5

## Problem Overview
Your task in this assignment is to implement the famous Rock-Paper-Scissors game.  If you are not familiar with the rules of this game, consider the graphic shown below:

![RPS Game](https://upload.wikimedia.org/wikipedia/commons/thumb/6/67/Rock-paper-scissors.svg/1200px-Rock-paper-scissors.svg.png)

(By Enzoklop - Own work, CC BY-SA 3.0, https://commons.wikimedia.org/w/index.php?curid=27958688)

A summary of these rules is:
* Rock crushes scissors
* Paper covers rock
* Scissors cuts paper

Your program should perform the following steps:

1. Prompt the user for a random seed and use that to seed the random number generator.
1. Display the list of options as shown below and prompt the user for their choice.
1. Tell the user what the computer chose and what the result is (i.e. a tie, the user won, or the user lost).

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must used the pseudo-random number generator in Python (both the  ``random.seed()`` and ``random.randint()`` commands). The seed must be an integer (not a string).
1. You must check the user input to make sure that it is valid and report an error if it is not.
1. You must make use of branching statements (``if``, ``if-else``, and/or ``if-elif-else``) and Boolean expressions to determine the outcome of the game.
1. The program **must** produce output exactly as shown below, assuming that the given amounts are entered.

```html
Enter a random seed: 2
The computer has chosen and so must you.
  1) Rock
  2) Paper
  3) Scissors
Make your choice: 1
The computer chose Rock -- it's a tie!
```

or 

```html
Enter a random seed: 2
The computer has chosen and so must you.
  1) Rock
  2) Paper
  3) Scissors
Make your choice: 2
The computer chose Rock -- you win!
```

or

```html
Enter a random seed: 2
The computer has chosen and so must you.
  1) Rock
  2) Paper
  3) Scissors
Make your choice: 3
The computer chose Rock -- you lose!
```

or

```html
Enter a random seed: 666
The computer has chosen and so must you.
  1) Rock
  2) Paper
  3) Scissors
Make your choice: 0
Invalid choice. Please enter a number between 1 and 3.
```

## Grade Specification

You will earn **four points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
