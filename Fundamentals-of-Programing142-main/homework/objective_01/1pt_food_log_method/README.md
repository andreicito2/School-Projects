# CPTR 142: Objective #1 (1 point)

## Problem Overview

Your task in this homework assignment is to create a class to log foods with their calorie count.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must define a class `FoodLog` in the file `food_log.py` with a dictionary attribute called `food_log`.

1. The class must include an instance method called `add_food` which takes two parameters.

    * a string for the name of food

    * an integer for the number of calories

1. The instance method `add_food` will add food to the dictionary with the key being the name and the value being the calories

1. The file `food_log.py` should not contain a main program, it should only contain your function. To test your function, add code to the `food_log_test.py` file. Note that code in `food_log_test.py` will not be graded.

1. Below is an example of a call to the `FoodLog` class which you could implement in `food_log_test.py` to test your function.

    Python Code:
    ```python
    import food_log
    
    thanksgiving_meal = food_log.FoodLog()
    thanksgiving_meal.add_food("Mashed Potato", 206)
    thanksgiving_meal.add_food("Stuffing", 150)
    print(thanksgiving_meal.food_log)
    ```

    Output:
    ```html
    {'Mashed Potato': 206, 'Stuffing': 150}
    ```

## Grade Specification

You will earn **one point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
