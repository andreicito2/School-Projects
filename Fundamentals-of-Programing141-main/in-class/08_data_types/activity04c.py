gpa = {
    "Jones": 3.4, 
    "Hernandez": 3.6, 
    "Martin": 3.4, 
    "Lee": 3
}
name = input("Enter student name: ")
print("GPA for {} is {:0.2f}".format(name,gpa[name]))
#del gpa["Martin"]
gpa["Smith"] = 2.9
print(gpa)
