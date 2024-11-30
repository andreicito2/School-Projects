import csv

with open('students.csv', 'r') as csvfile:
    student_reader = csv.reader(csvfile, delimiter=',')

    for row_num, row in enumerate(student_reader):
        print('Row #{}:'.format(row_num), row)
