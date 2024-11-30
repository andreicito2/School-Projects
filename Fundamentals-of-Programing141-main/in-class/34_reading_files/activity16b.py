file_name = input("Enter a file name to sum: ")
numbers = open(file_name)

total = 0
for num in (numbers):
    if num.rstrip().isnumeric():
        total += int(num)
    print(num)

print("The sum of the numbers in {} is {}.".format(file_name, total))
