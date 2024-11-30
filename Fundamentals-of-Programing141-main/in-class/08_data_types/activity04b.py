digits = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
fruits = ["apple", "banana", "cantelope", "pear", "orange"]
students = ["Jones", 3.4, "Hernandez", 3.6]
students.append("Martin")
students.append(3.4)
print(students)
students.insert(2,"Lee")
students.insert(3,3.0)
print(students)
print(students.count(3.4))
print(students.index(3.4))
students.remove(3.4)
print(students.index(3.4))
print(students)