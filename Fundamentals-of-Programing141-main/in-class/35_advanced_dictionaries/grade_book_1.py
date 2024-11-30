import grades_1


def average(grades):
    '''
    Pre: grades is a list of grades
    Post: returns the average of all entries in the 1-dimensional list
    '''
    # TODO Finish this function
    return sum(grades)/len(grades)


# average of a 2-dimensional list
def overall_average(grades):
    '''
    Pre: grades is a 2-dimensional list of grades
    Post: returns the average of all entries in the 2-dimensional list
    '''
    total_sum = 0
    count = 0
    for list_of_scores in grades:
        for score in list_of_scores:
            total_sum += score
            count += 1
    return total_sum / count
    
    


for i in range(len(grades_1.grades)):
    # TODO Modify this to print student names instead of numbers
    print("Average for student {:10s}: {:0.2f}".format(grades_1.names[i], average(grades_1.grades[i])))

print("\nOverall average: {:0.2f}".format(overall_average(grades_1.grades)))
