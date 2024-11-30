f = open("student_info.txt","w")

first_name = input("Enter first name: ");
last_name = input("Enter last name: ");
student_id = input("Enter student ID: ");

f.write("Name: " + first_name + " " + last_name + "\n")
f.write("Student ID: " + student_id + "\n")

print("Done! Data is saved in file: student_info.txt")
f.close()
