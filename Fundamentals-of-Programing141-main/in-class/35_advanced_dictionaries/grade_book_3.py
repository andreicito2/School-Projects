import grades_3


def average(grades):
    '''
    Pre: grades is a list of grades
    Post: returns the average of all entries in the 1-dimensional list
    '''
    # TODO Copy your code from previous work
    return sum(grades[student][scores])/len(grades[student][scores])


def minimum(grades):
    '''
    Pre: grades is a 1-dimensional list of grades
    Post: returns the minimum of the list
    '''
    # TODO Finish this function
    return min(grades[student][scores])


def maximum(grades):
    '''
    Pre: grades is a 1-dimensional list of grades
    Post: returns the maximum of the list
    '''
    # TODO Finish this function
    return max(grades[student][scores])


print("{:^10s} | {:^4s} | {:^7s} | {:^7s} | {:^7s}".format("Name", "ID", "Average", "Max", "Min"))
print("="*50)
for student in grades_3.grades:
    print("{:<10s} | {:<4s} | {:<7s} | {:<7s} | {:<7s}".format(student,grades_3.grades[student]['id'],average(grades_3.grades[student]['scores']),maximum(grades_3.grades[student]['scores']),minimum(grades_3.grades[student]['scores'])))
