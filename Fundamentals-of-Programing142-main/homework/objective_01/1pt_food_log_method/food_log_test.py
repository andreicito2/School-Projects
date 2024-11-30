"""
Implement your class in the file food_database.py

Use this file to test your class.  The code you write in this file will
not be graded.
"""

import food_log

# test the class
thanksgiving_meal = food_log.FoodLog()
thanksgiving_meal.add_food("Mashed Potato", 206)
thanksgiving_meal.add_food("Stuffing", 150)
print(thanksgiving_meal.food_log)
