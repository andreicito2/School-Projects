"""
Expert Problem: Quiz Grader

File Name: grade_quizzes.py
Name:      ?
Course:    CPTR 141
"""
import os
import os.path
# Your code goes here
def grade_quizzes(quiz_files, answer_files, output_file):
    af = open(answer_files)
    quick = af.readlines()
    answer_list = []
    for i in quick:
        answer_list.append(i[0])
    print(answer_list)
    qd = os.listdir(quiz_files)
    qd = sorted(qd)
    with open(output_file, 'a') as final:
        final.write("Student File,Correct,Total,Pass or Fail\r\n")

    for i, student in enumerate(qd):
        with open(quiz_files+"/{}".format(student), 'r') as student_quiz:
            sa = student_quiz.readlines()
            true_sa = []
            for i in sa:
                true_sa.append(i[0])
            corrct = 0
            questions = 0
            for i, answere in enumerate(true_sa):
                if answere == answer_list[i]:
                    corrct += 1
                    questions += 1
                else:
                    questions += 1
                if (corrct/questions) >= 0.7:
                    PandF = 'Pass'
                else:
                    PandF = "Fail"
        with open(output_file, 'a') as final:
            
            final.write("{},{},{},{}\r\n".format(student,corrct,questions,PandF))







#grade_quizzes("student_quizzes","answers.txt", "grades.csv")