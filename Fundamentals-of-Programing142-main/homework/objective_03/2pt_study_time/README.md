# CPTR 142: Objective #4 (2 point)

## Problem Overview

In this homework you will write a program that collects user input and performs arithmetic calculations.
One value used in the calculation will be a random number that is picked given a seed value.

## Scenario

You've decided to write a program to help you keep track of the time you spend studying each evening.
In particular, this program will:

1. Prompt the user for the time (in hours and minutes) spent on each of three classes.

1. Factor in a random amount of time (but less than one hour) for visits with friends .

1. Display the total amount of time spent in hours and minutes.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use separate variables for each value entered by the user and then combine those variables using one or more arithmetic expressions to compute the total number of hours and minutes spent.

1. You must seed the random number generator with a user-entered seed using `srand()` and then use the `rand()` function to compute a random number between 0 and 59 representing the number of minutes spent with friends.

1. You must make use of the modulus (`%`) operator.

1. You must format your code using the "Format Document" command in your development environment.

1. The program **must** produce output exactly as shown below, assuming that the given values are entered.  Note that some lines are indented with two spaces and the next-to-last line should be completely blank.

```html
Enter a random seed: 500
Enter the hours and minutes (separated by a space) that you studied for each class:
  First Class: 1 20
  Second Class: 0 45
  Third Class: 0 30
  Your friends dropped by for 58 minutes.
  
You spent 3 hours and 33 minutes.
```

## Grade Specification

You will earn **two points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
