"""
Intermediate Problem:  Create a program that outputs the amount of hours,
and the both the remaining minutes and seconds from a given number of seconds.

File Name: time_conversion.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here
sec1 = int(input("Enter the number of seconds: "))
sec = sec1
num_hour = (sec//3600)
sec = sec % 3600
num_min = (sec// 60)
num_sec = sec % 60

print("\n"+"{}".format(sec1), "seconds is", int(num_hour), "hour(s)", int(num_min), "minute(s)","and", int(num_sec),"second(s).")