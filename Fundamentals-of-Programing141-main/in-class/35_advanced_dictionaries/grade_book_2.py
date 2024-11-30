import grades_2


def average(grades):
    '''
    Pre: grades is a list of grades
    Post: returns the average of all entries in the 1-dimensional list
    '''
    # TODO Copy your code from previous work
    return sum(grades)/len(grades)


for student in grades_2.grades:
    print("Average for {:10s}: {:0.2f}".format(student, average(grades_2.grades[student])))