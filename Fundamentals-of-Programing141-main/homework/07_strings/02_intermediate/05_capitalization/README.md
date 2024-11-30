# CPTR 141: Objective #7 (2 point)

## Problem Overview

Your task in this homework assignment is to create a function that capitalizes the first letter of each sentence and any consonant that is immediately after after a vowel in a single word. Why would you want to do this?  Well, because you can earn two homework points by doing so!

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function named `capitalization` in the file `capitalization.py` which takes as a single parameter the string to be manipulated.

2. The function must return a copy of this string in which
+ The first letter of any sentence has been capitalized. Sentences will be ended by one of the punctuation marks `.`, `!`, or `?`.
+ Any consonant that comes immediately after a vowel in a single word. Recall that the vowels in English are `a`, `e`, `i`, `o`, `u`, and `y`. So, for example, your function would take `eat this.` and return `EaT thiS`.

3. The file `capitalization` should not contain a main program, it should only contain your function. To test your function, add code to the `capitalization_test.py` file. Note that code in `capitalization_test.py` will not be graded.

4. Below is an example of a call to the `capitalization` function which is implemented in `capitalization_test.py` as an initial test for your function.

    Python Code:
    ```python
    import capitalization

    str = "this is a test. this is only a test! got it?"
    print(capitalization.capitalization(str))
    ```

    Output:
    ```html
    ThiS iS a teSt. ThiS iS oNly a teSt! GoT iT?
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
