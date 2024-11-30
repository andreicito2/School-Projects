# CPTR 141: Objective #6 (1 point)

## Problem Overview

Your task in this homework assignment is to create a function that converts a time in 24-hour "HH:MM:SS" format from the pacific time zone to a given time zone and returns the converted time in "HH:MM:SS" format.

## US Time Zones

There are four major time zones in the continental US. They are shown on the map below.  Note that the time in each time zone is exactly one hour different from the time in neighboring zones.

![US Time Zones](https://i.pinimg.com/originals/bb/c5/bf/bbc5bf7355cd0b2acfee772ea3b788bf.jpg)

We will use the following abbreviations for these time zones, working from west to east:

* PT -- Pacific Time
* MT -- Mountain Time
* CT -- Central Time
* ET -- Eastern Time


## 24-Hour Time

Recall that in 24-hour format, afternoon (or p.m.) times are represented by numbers from 12 to 23.  So, for example, 20:52:45 is 8:52 p.m. and 45 seconds.  

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function named `tz_convert` in the file `time_zone.py` which takes two parameters, in this order:  

    i. The time from the Pacific time zone to be converted, in 24-hour HH:MM:SS format

    iii. The code for the time zone to which this time is to be converted

2. The function must return the equivalent time, in 24-hour HH:MM:SS format, in the provided time zone.  If the provided time zone is not one of the ones listed above, return the original pacific time without any changes.

2. The file `time_zone.py` should not contain a main program, it should only contain your function.  To test your function, add code to the `time_zone_test.py` file.  Note that code in `time_zone_test.py` will not be graded.

3. Below is an example of a call to the `tz_convert` function which you could implement in `time_zone_test.py`.

    Python Code:
    ```python
    print("In Mountain Time it is:",time_zone.tz_convert("14:52:00","MT"))
    ```

    Output:
    ```html
    In Mountain Time it is: 15:52:00
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
