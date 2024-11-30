"""
Expert Problem: Create a program that prompts the user information about
                their pets, including birth year, and then prints out the
                pets' ages in a future year.

File Name: pet_age_calculate.py
Name:      ?
Course:    CPTR 141
"""

# use these lists or your program will not pass the autograder
pet_name = []
pet_type = []
pet_born = []

# your code goes here
print("First Pet's Info:\n=================")
pet_n_1 = str(input("Name: "))
pet_name.append(pet_n_1)
pet_type_1 = str.lower(input("Type: "))
pet_type.append(pet_type_1)
pet_born_1 = int(input("Birth Year: "))
pet_born.append(pet_born_1)

print("\nSecond Pet's Info:\n=================")
pet_name_2 = str(input("Name: "))
pet_name.append(pet_name_2)
pet_type_2 = str.lower(input("Type: "))
pet_type.append(pet_type_2)
pet_born_2 = int(input("Birth Year: "))
pet_born.append(pet_born_2)

print("\nThird Pet's Info:\n================")
pet_name_3 = str(input("Name: "))
pet_name.append(pet_name_3)
pet_type_3 = (str.lower(input("Type: ")))
pet_type.append(pet_type_3)
pet_born_3 = int(input("Birth Year: "))
pet_born.append(pet_born_3)

year = int(input("\nEnter a Year: "))

print("\nIn {}, the ages of your pets will be:".format(year))
print("  - {} the {} will be".format(pet_n_1, pet_type_1), year-pet_born_1)
print("  - {} the {} will be".format(pet_name_2, pet_type_2), year-pet_born_2)
print("  - {} the {} will be".format(pet_name_3, pet_type_3), year-pet_born_3)