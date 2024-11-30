# CPTR 141: Objective #7 (4 point)

## Problem Overview

Your task in this homework assignment is to create two functions that together give statistics about the word count in sentences in a string of text. The first function will compute the statistics and return them as a tuple, and the second function will take that tuple and returns the text needed to display a formatted table summarizing the word counts statistics.


## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Your must write your functions in the file `word_count.py`. The two functions must be named `get_statistics()` and `get_table()` and must work as follows.

1. The function `get_statistics()` must take as its only argument a string of text. This function must count the number of words in each sentence in the provided string. Sentences will be separated by the punctuation marks `.`, `!`, and/or `?`. Your function must then return a tuple containing the following values as floating-point numbers:
    + The number of sentences in the text
    + The minimum number of words in any one sentence
    + The maximum number of words in any one sentence
    + The average number of words per sentence in the text

1. The function `get_table()` must take as its argument the four values returned by `get_statistics()` in the order listed above. It must then return (but not print out) a string that, when printed, would display a summary table of those statistics (see the example below).

3. The file `word_count` should not contain a main program, it should only contain your function. To test your function, run and/or modify the code in the file `word_count_test.py`. Note that code in `word_count_test.py` will not be graded.

4. Below is an example of a call to the two functions which you can find in `word_count_test.py` and which will be used as one of the tests for your function.

    Python Code:
    ```python
    import word_count

    test_string = "This is a test.  This is only a test!  Got it?"

    (num, min, max, avg) = word_count.get_statistcs(test_string)
    table = word_count.get_table(num, min, max, avg)

    print(table)
    ```

    Output:
    ```html
    +--------------------------------+
    |    Summary for 3 Sentences     |
    +-------------------------+------+
    | Minimum Sentence Length |  2.0 |
    | Maximum Sentence Length |  5.0 |
    | Average Sentence Length |  3.7 |
    +-------------------------+------+
    ```

## Grade Specification

You will earn **four points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
