"""
In-Class Exercises: Test the methods for exiting a loop:
                    continue and break

File Name: loop_exit.py
Course:    CPTR 141
"""

'''
sum numbers from 2 to 20
  skipping 10 and 11
'''
num = 2
my_sum = 0
while num < 20:
    num += 1
    if num == 10 or num == 11:
      continue
    my_sum += num
print("Sum: ", my_sum)