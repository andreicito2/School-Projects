# CPTR 142: Objective #5 (2 point)

## Problem Overview

Create a class with definition and implement the methods.

## Description

A `Employee` class must include the employee's name and wage.
The class must have a getter function for the name and a total hourly pay function that calculates the total pay for X number of hours
The class must include a constructor that takes the employee's name and wage.

## Solution Specification

Your program should support the following features:

1. You must create a `Employee` class with these methods:

    * A constructor that has two parameters:
    
        * The **name** as a *string*
        * The **wage** as an *double*

    * A `getPay` method that takes one double parameter and returns the calculated pay.

    * A `getName` method that returns the employee name.

1. The class definition should be in `employee.h` and the class method definitions should be in `employee.cpp`.

1. You must format your code using the "Format Document" command in your development environment.

1. The file `employee.h` and `employee.cpp` should not contain a main program, it should only contain your function. To test your function, add code to the `test_driver.cpp` file. Note that code in `test_driver.cpp` will not be graded.

1. Below is an example of a call to the `Employee` class which you could implement in `test_driver.cpp` to test your function.

**C++ Code**
Review the code in `test_driver.cpp`.

**Output**
```sh
Zookeeper Bob will be paid $1960 for 80 hours of work.
```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
