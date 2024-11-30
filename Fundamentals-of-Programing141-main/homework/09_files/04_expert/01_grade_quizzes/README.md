# CPTR 141: Objective #9 (4 point)

## Problem Overview

One of your professors has asked you to write a program to grade her multiple-choice quizzes. Each student quiz consists 10 or fewer questions, each of which has one of four possible answers: A, B, C, or D. The program will grade each quiz as follows.

1. First the program reads in the correct answers from a text file. The text file contains one answer per line, with the correct answer to the first question on line one, the correct answer to the second question on line two, and so on.

1. Next the program gets a list of students who took the quiz.  The student's names are used as the file names for the student quiz answers, which are stored in a folder.

1. Finally, the program grades each quiz. It does this by iterating through each of the student quiz files, reading the answers, and creating a new entry in a CSV file of results.  This CSV file must have the following format.

    i. The name of the student file

    ii. The number of correct answer for the student on the quiz

    iii. The total number of problems on the quiz

    iv. Whether the student passed the quiz (scored 70% or better) or not, indicated by the strings "Pass" or "Fail".

## Tip Suggestion

Consider making functions for repeated tasks.

* Write a function to read quiz scores into a list.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use define a function named `grade_quizzes` in the file `grade_quizzes.py` which takes three parameters:

    i. a string representing directory with student quizzes

    ii. a string representing the file containing the quiz answers

    iii. a string representing the csv file to which results will be saved

1. The function will process quizzes stored in student quiz folder and write the details about each students score in a CSV file. Each file in the student quiz folder represents a different student's grade.

1. Your solution should utilize the `with` statement.

1. The solution must read all files in the student quiz folder and grade them.

1. The grade results should be write out csv file with the following columns and the first row must contain the indicated headings:
  
    i. Student quiz file name (Student File)

    ii. Number of correct answers (Correct)

    iii. Total number of quiz questions (Total)

    iv. The text "Pass" if the student scored over 70%, or "Fail" otherwise (Pass or Fail)

1. The file `grade_quizzes` should not contain a main program, it should only contain your function. To test your function, add code to the `grade_quizzes_test.py` file. Note that code in `grade_quizzes_test.py` will not be graded.

1. Below is an example of a call to the `grade_quizzes` function which you could implement in `grade_quizzes_test.py` to test your function.

Python Code:
```python
import grade_quizzes

grade_quizzes.grade_quizzes("student_quizzes", "answers.txt", "grades.csv")
```

grades.csv:
```html
Student File,Correct,Total,Pass or Fail
Kite_Pickle.txt,4,10,Fail
John_Apple.txt,8,10,Pass
```

## Grade Specification

You will earn **four points** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
