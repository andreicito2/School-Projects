# CPTR 141: Objective #4 (2 points)

## Problem Overview

Your task in this homework assignment is to write functions to calculate and categorize a person's Body Mass Index (BMI).
The U.S. Department of Health & Human Services has a [online calculator](https://www.nhlbi.nih.gov/health/educational/lose_wt/BMI/bmicalc.htm) you can use as an example.

### BMI Details

Use the following formula to compute BMI, where weight is given in pounds and height in inches:

* weight / (height)<sup>2</sup> x 703

Once computed, the BMI can be categorized as follows:

* Underweight: BMI < 18.5
* Normal Weight: 18.5 <= BMI < 24.9
* Overweight: 24.9 <= BMI < 29.9
* Obese: BMI >= 29.9

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a function named `compute_bmi` in the file `bmi.py` which takes two parameters in the order shown below and returns the numeric value of the BMI according to the formula above.

    i. `height` is the person's height in inches

    ii. `weight` is the person's weight in pounds

2. You must define a function named `categorize_bmi` in the file `bmi.py` which takes as its only parameter a BMI numeric value and returns "underweight", "normal weight", "overweight", or "obese" according to the categorization above.  

3. The file `bmi.py` should not contain a main program, it should only contain your functions. To test your functions, add code to the `bmi_test.py` file.  Note that code in `bmi_test.py` will not be graded.

1. Below is an example using these two BMI functions which you could implement in `bmi_test.py`.

    Python Code:
    ```python
    index = bmi.compute_bmi(65, 130)
    print("Subject's BMI is {:.2f} which is classified as {}.".format(
        index, bmi.categorize_bmi(index)
    ))
    ```

    Output:
    ```html
    Subject's BMI is 21.63 which is classified as normal weight.
    ```

## Grade Specification

You will earn **two points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
