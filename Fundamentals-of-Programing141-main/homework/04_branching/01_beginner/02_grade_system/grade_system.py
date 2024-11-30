"""
Beginner Problem: Create a program that outputs the correct letter grade
                  when given a grade percentage.

File Name: grade_system.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
grade = float(input("Enter Grade as a Percent: "))
if grade >= 90:
    print("\n===LETTER GRADE===\nA")
elif grade >= 80:
    print("\n===LETTER GRADE===\nB")
elif grade >= 70:
    print("\n===LETTER GRADE===\nC")
elif grade >= 60:
    print("\n===LETTER GRADE===\nD")
elif grade >= 0:
    print("\n===LETTER GRADE===\nF")