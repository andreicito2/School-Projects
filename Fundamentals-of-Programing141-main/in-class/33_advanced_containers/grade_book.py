"""
In-Class Exercise and Demo: Building a Gradebook

File Name: grade_book.py
Course:    CPTR 141
"""

# define a 2D array of scores
grades = [
    [73, 62, 42, 59],  # grades for student 1
    [91, 97, 83, 81],  # grades for student 2
    [78, 82, 91, 90],  # grades for student 3
    [83, 74, 69, 72],  # grades for student 4
    [95, 74, 83, 89],  # grades for student 5
]

def average(grades):
    '''
    pre: grades is a lost of grades
    post: retusnes the average of entries in the list
    '''
    return sum(grades)/len(grades)

def overall_average(grades):
    

# Find and display the lowest score for each student
print("Lowest Scores")
for i in range(len(grades)):
    lowest_score = 100
    for score in grades[i]: 
        if score < lowest_score:
            lowest_score = score
    print("  Student {:d}: {:d}".format(i+1, lowest_score))

# Find and display the highest overall score
max = 0
for row in grades:
    for col in row:
        if col >max:
            max = col
print("Highest Overall Score: {:d}".format(max))

for i in range(len(grades)):
    print("Average for student {:d}: {:0.2f}".format(i+1, average(grades[i])))