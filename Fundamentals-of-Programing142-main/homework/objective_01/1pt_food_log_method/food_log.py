"""
Beginner Problem:  Define a class name 'FoodLog' and create a instance method named
    'add_food' that takes two parameters 'food' & 'calories'. These parameters
    should be added to a dictionary attribute called 'food_log'.

File Name: food_log.py
Name:      ?
Course:    CPTR 142
"""

# Your code goes here
class FoodLog:
    def __init__(self):
        self.food_log = {}

    def add_food(self, food, calories):
        
        self.food_log[food] = calories

    

