"""
Implement your class in the file car.py

Use this file to test your class. The code you write in this file will
not be graded.
"""

import car
import engine

# Test airplane class
four_cylinders = engine.Engine(4, "gas")
car_test = car.Car(four_cylinders)
print(car_test)
