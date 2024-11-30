# CPTR 142: Objective #4 (2 point)

## Story

A zoo has requested a menu to display the current prices and allow the user to select the type of ticket (child, adult, or senior).
Then enter the number desired tickets and display the cost for those tickets.

## Problem Overview

In this homework assignment you will write a program that collects user input and uses a switch to determine which output should displayed.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must collect the user input for three questions:

    * Are you big? (y/n)
    * Are you hairy? (y/n)
    * Do you live in the water? (y/n)

1. You must use a `if` `else` statements to create your animal guess.

    * For example: *Are you a walrus?*

1. Use this table for details how each question maps to an animal.

    | Big   | Hairy | Water | Animal   |
    |-------|-------|-------|----------|
    | yes   | yes   | yes   | walrus   |
    | yes   | yes   | no    | otter    |
    | yes   | no    | yes   | whale    |
    | yes   | no    | no    | salmon   |
    | no    | yes   | yes   | giraffe  |
    | no    | yes   | no    | hyena    |
    | no    | no    | yes   | elephant |
    | no    | no    | no    | gecko    |

1. You must format your code using the "Format Document" command in your development environment.

1. The program **must** produce output exactly as shown below, assuming that the given amounts are entered.

```html
What animal are you?
 - Are you big? (y/n) y
 - Are you hairy? (y/n) y
 - Do you live in the water? (y/n) y

Are you a walrus?
```

## Grade Specification

You will earn **two points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
