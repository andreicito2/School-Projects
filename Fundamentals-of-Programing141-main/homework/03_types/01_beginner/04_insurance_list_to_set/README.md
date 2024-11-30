# CPTR 141: Objective #3 (1 point)

## Problem Overview

Your task in this homework assignment is to write a program that removes the duplicates from a given list of insurance names using a set container. The program then outputs the old list, the new list without duplicates (as a set), and the number of duplicate names removed.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use `print` to display output.

2. You must use the list `names.insurance_names` from the provided `names` module to create a set called `unique_names`.

3. You must print out a `sorted` version of the `unique_names` set (that is, use the command `print(sorted(unique_names)))` so that the order in which the names are printed is always the same.

4. You must format your code using the "Format Document" command in your development environment.

5. You **must** produce output exactly as shown below.

```html
Original list of insurance companies:
['Allstate', 'GEICO', 'Ironshore', 'Chubb Corp', 'Aflac', 'Allstate', 'Safeco', 'USAA', 'Allstate', 'Chubb Corp', 'The Regence Group', 'The General', 'Aflac', 'West Coast Life']

Modified list of insurance companies:
['Aflac', 'Allstate', 'Chubb Corp', 'GEICO', 'Ironshore', 'Safeco', 'The General', 'The Regence Group', 'USAA', 'West Coast Life']

We removed a total of 4 duplicates from our list.
```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
