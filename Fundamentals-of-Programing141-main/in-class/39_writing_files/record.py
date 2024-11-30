"""
In-Class Exercise and Demo: Writing Files

File Name: recorde.py
Course:    CPTR 141
"""

# write your code here
f = open("students.csv", 'w')

while(True):
    student_id = input("Enter student ID ('done' to quit): ")
    if student_id == 'done':
        break
    student_name = input("Enter student name: ")
    student_year = input("Enter expected graduation year: ")

    f.write("ID: "+ student_id + '\n')
    f.write("Name: "+ student_name + '\n')
    f.write("Year: " + student_year + '\n')

f.close()