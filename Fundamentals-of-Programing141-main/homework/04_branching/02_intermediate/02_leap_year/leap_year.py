"""
Intermediate Problem:  Create a program that indicates if a given year is a leap
                       year or not.

File Name: leap_year.py
Name:      ?
Course:    CPTR 141
"""

# your code goes here
year = int(input("Enter year: "))

if (year % 4) == 0:
    if not (year % 100) == 0:
        print("The year {} is a leap year.".format(year))
    else:
        if (year % 400) == 0:
            print("The year {} is a leap year.".format(year))
        else:
            print("The year {} is not a leap year.".format(year))

else:
    print("The year {} is not a leap year.".format(year))
