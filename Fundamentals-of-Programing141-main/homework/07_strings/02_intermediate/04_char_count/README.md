# CPTR 141: Objective #7 (2 point)

## Problem Overview

Your task in this homework assignment is to create a function that counts the number of occurrences of each character in a string, ignoring the case of any letters, and returns a dictionary with the characters as the keys and their counts as the values. 

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function named `char_count` in the file `char_count.py` which takes as a single parameter the string to be counted.

2. The function must return a dictionary containing the lower-case versions of any characters found in the string as the key and the number of times that character occurs as the value.

3. The file `char_count` should not contain a main program, it should only contain your function. To test your function, add code to the `char_count_test.py` file. Note that code in `char_count_test.py` will not be graded.

4. Below is an example of a call to the `char_count` function which you could implement in `char_count_test.py` to test your function.

    Python Code:
    ```python
    import char_count

    print(char_count.char_count("The rain in spain stays mainly in the plain"))
    print()
    print(char_count.char_count("Peter Piper picked a peck of pickled peppers"))
    ```

    Output:
    ```html
    {'t': 3, 'h': 2, 'e': 2, ' ': 8, 'r': 1, 'a': 5, 'i': 6, 'n': 6, 's': 3, 'p': 2, 'y': 2, 'm': 1, 'l': 2}

    {'p': 9, 'e': 8, 't': 1, 'r': 3, ' ': 7, 'i': 3, 'c': 3, 'k': 3, 'd': 2, 'a': 1, 'o': 1, 'f': 1, 'l': 1, 's': 1}
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
