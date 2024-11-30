"""
Expert Problem:  A Nearest Neighbor implementation using two functions

File Name: nearest_neighbor.py
Name:      ?
Course:    CPTR 141
"""
import math
# Your code goes here




def nearest_neighbor(point_3, point_4):
    d1=[]
    for i in range(len(point_4)):
        dist=get_distance(point_4[i][0:2], point_3)
        d1.append(dist)
        short=min(d1)
        index=d1.index(short)
    return point_4[index][2]


def get_distance(point_1, point_2):
    dist_y = math.fabs(point_1[0] - point_2[0])
    dist_x = math.fabs(point_1[1] - point_2[1])
    diststnace = math.sqrt((dist_y**2) + (dist_x**2))
    return diststnace