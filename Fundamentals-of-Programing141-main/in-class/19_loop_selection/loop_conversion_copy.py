"""
In-Class Exercises:  Conversion between types of loops

File Name: loop_conversion.py
Course:    CPTR 141
"""

# Convert the following for loop to a while loop
i = 0
count = 0
product = 1
while i  <= 5:
    product *= i
    count += 1
    i += 1
print("product: {}, count: {}".format(product, count))

# Convert the following while loop to a for loop
numbers = [10, 28, 2020]
i = 0
total = 0
for i in range(3):
    total += numbers[i]
    #i += 1
average = total / len(numbers)
print("average: {}, total: {}".format(average, total))

# Convert the following while loop to a for loop
total = 0
x = 100
for x in range(75):
    total += x
    #x -= 1
print("x: {}, total: {}".format(x, total))
