# CPTR 141: Homework Assignment #4

## Problem Overview
Your task in this assignment is to implement a solver for the quadratic equation. The program prompts the user for the coefficients `a`, `b`, and `c` in a quadratic polynomial and then uses the quadratic formula shown below to find solutions.

![Quadratic Equation](https://media.istockphoto.com/vectors/quadratic-equation-vector-id1292243663?k=20&m=1292243663&s=612x612&w=0&h=AoyiO8a1b1RJAPZnlxl5N9j1EhYaTBGsWDhIasSeu5U=)

To determine correct solutions, the probram must consider the following conditions..

1. If `a` is zero, then the equation is not quadratic so we can't use the quadratic formula to solve it.
1. If `a` is not zero, then the number and type of solutions are determined by the sign of the *discriminant* (the part of the formula under the square root sign above):
    + If the discriminant is positive, there are two real solutions
    + If the discriminant is 0, there is one real solution
    + If the discriminant is negative, there are two complex solutions


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. The program must prompt the user for three floating-point numbers.

1. Based on those values, your program should print out the solutions to the quadratic equation or indicate that there are no solutions.

1. The program **must** produce output exactly as shown below, assuming that the given amounts are entered.

```
Enter the coefficients below:
  a = 0
  b = 1
  c = 2
Error! Not a quadratic equation.
```

or

```
Enter the coefficients below:
  a = 1
  b = 2
  c = 1
The single real root is -1.0000.
```

or 

```
Enter the coefficients below:
  a = 2
  b = 1
  c = 0
The two real roots are 0.0000 and -0.5000.
```

or

```
Enter the coefficients below:
  a = 1
  b = 2
  c = 3
The two complex roots are -1.0000 + 1.4142i and -1.0000 - 1.4142i.
```

## Grade Specification

You will earn **two points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
