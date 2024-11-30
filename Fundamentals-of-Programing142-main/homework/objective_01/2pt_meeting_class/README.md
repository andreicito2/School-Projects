# CPTR 142: Objective #1 (2 point)

## Problem Overview

Your task in this homework assignment is to create a class `Meeting` and define a special method to return a formatted string.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a class `Meeting` in the file `meeting.py` that has a three attributes.

    * a string for the meeting title

    * a string for the start time

    * a string for the end time

1. The constructor method may take one to three parameters. One for each attribute in the order listed above with defaults for the time parameters.

    * Default start time of "12:00"

    * Default end time of "13:00"

1. Define a special instance method called `__str__`. The format should match the example below.

1. The file `meeting.py` should not contain a main program, it should only contain your class. To test your class, add code to the `meeting_test.py` file. Note that code in `meeting_test.py` will not be graded.

1. Below is an example of a call to the `Meeting` class which you could implement in `meeting_test.py` to test your class.

    Python Code:
    ```python
    import meeting

    my_meeting = meeting.Meeting("Study Group", "18:00", "19:00")
    print(my_meeting)
    ```

    Output:
    ```html
    Study Group starts at 18:00 and ends at 19:00
    ```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
