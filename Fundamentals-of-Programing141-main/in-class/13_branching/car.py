"""
In-Class Exercise:  Display different messages depending on the age of
                    a car.

File Name: car.py
Course:    CPTR 141
"""

# get the car year from the user
car_year = int(input("Enter car year: "))

print("Your car:")

# for cars built before 1967
if car_year < 1967:
    print("Probably has few safety features.")

# for cars built after 1970
if car_year >1970:
    print("Probably has head rests.")

# for cars built after 1991
if car_year > 1991:
    print("Probably has anti-lock brakes.")

# for cars built after 2001
if car_year > 2001:
    print("Probably has airbags.")
