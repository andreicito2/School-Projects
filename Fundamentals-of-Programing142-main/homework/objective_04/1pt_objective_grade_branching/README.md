# CPTR 142: Objective #4 (1 point)

## Problem Overview

In this homework you will write a the body of a function.

## Scenario

Determine the grade a student will be receiving based on their homework and quiz score.
Below you will see the conditions for receiving a letter grade.

* `E` - Homework score must be 10 or more points, Quiz score must be 90% or better

* `M` - Homework score must be 7-9 points, Quiz score must be 70% - 89.99%

* `R` - Homework score must be <7 points, Quiz score must be <70%

* `N` - Homework score must be 0 points, Quiz score must be 0%

Note that 90% is equal to 0.9 as decimal value.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use update the `objective_grade` function to return the EMRN grade when given the homework and quiz score.
    The function takes in two parameters:

    * A `int` for the homework score

    * A `double` for the quiz score

1. In particular, you must use the following C++ keywords at least once in your program:

    * The `if` keyword
    * The `else` keyword

1. You must format your code using the "Format Document" command in your development environment.

1. The file `objective_grade.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `objective_grade` function which you could implement in `test_driver.cpp` to test your function.

**C++ Code:**
```c++
#include <iostream>

#include "objective_grade.h"

int main() {
  int homework_score = 8;
  double quiz_score = 0.7;

  char grade = objective_grade(homework_score, quiz_score);
  std::cout << "A homework score of " << homework_score
            << " and a quiz score of " << quiz_score << " gives you have an "
            << grade << std::endl;

  return 0;
}
```

**Output:**
```html
A homework score of 8 and a quiz score of 0.7 gives you have an M
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
