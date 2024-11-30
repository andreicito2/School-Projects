# CPTR 141: Objective #5 (2 point)

## Problem Overview

Your task in this homework assignment is to write a program that prompts the user for the first and last names of infinite amounts of students.  The program then calculates the CS lab username (first four letters of the last name together with first two letters of the first name) and creates a dictionary whose keys are the lower-case CS lab usernames and values are the full student names.  You may assume that last names are always at least 4 characters long and first names are at least two characters long. Keep creating new entries until the user decides to quit.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use `input` and `print` to get data from user and display output.

2. You must create a `dictionary` named `cs_lab_users` to store key/value paris with a six-letter username as the key and full name as the value.

3. You must format your code using the "Format Document" command in your development environment.

4. You **must** produce output exactly as shown below when the user enters "Adam", "Ross", and "Joe", "Smith".

```html
Welcome to CS Lab User Database
===============================
Enter first name of user #1: Adam
Enter last name of user #1: Ross
Generated Username: rossad
Enter another user (y/n)? y

Enter first name of user #2: Joe
Enter last name of user #2: Smith
Generated Username: smitjo
Enter another user (y/n)? n

CS Lab Users:
  * Adam Ross (rossad)
  * Joe Smith (smitjo)
```

## Grade Specification

You will earn **two points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
