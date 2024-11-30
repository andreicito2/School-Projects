# CPTR 142: Objective #1 (2 point)

## Problem Overview

Your task in this homework assignment is to create a class that holds a list of books and allows lists to be compared to each other.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a class `ReadingList` in the file `reading_list.py` with one attribute for the list of books.

1. Create a instance method `add_book` that takes one string parameter as the name of the book.
   The book should be added to the `books` attribute in the class.

1. Create two special instance methods in `NumberList` for greater than and less than comparisons.
   The comparison should be made based on the number of books in the list.

1. The file `reading_list.py` should not contain a main program, it should only contain your class. To test your class, add code to the `reading_list_test.py` file. Note that code in `reading_list_test.py` will not be graded.

1. Below is an example of a call to the `NumberList` class which you could implement in `reading_list_test.py` to test your class.

    Python Code:
    ```python
    import reading_list

    my_reading = reading_list.ReadingList()
    my_reading.add_book("Bible")
    my_reading.add_book("Grit")
    print(my_reading < my_reading)
    ```

    Output:
    ```html
    False
    ```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
