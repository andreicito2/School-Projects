import math
hi = int(input("hello:"))

def print_area(radius):
    area = (2*math.pi) * (radius)
    print("The circumpherence of a circle of radius {} is {:.2f}".format(radius, area))
print_area(hi)

# write main part of the program here
