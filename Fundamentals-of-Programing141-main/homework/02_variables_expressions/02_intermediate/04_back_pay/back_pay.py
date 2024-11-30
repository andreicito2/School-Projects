"""
Intermediate Problem:  Create a program that outputs the amount of retroactive pay due
                       the employee, the new annual salary, and the new monthly salary.

File Name: back_pay.py
Name:      ?
Course:    CPTR 141
"""

RAISE = 0.076

# Your code goes here
annual_sal = float(input("Enter current annual salary: $"))
num_month_back_pay = float(input("Enter number of months for back pay: "))

print("\nI'll return new annual salary, monthly salary, and retroactive pay in dollars.")
n_annual_sal = annual_sal * (1+RAISE)
print("New annual salary:" + "{:12.2f}".format(n_annual_sal))
n_month_sal = n_annual_sal/12
print("New monthly salary:" + "{:11.2f}".format(n_month_sal))
month_extra = n_month_sal - (annual_sal/12)
retra_pay = month_extra * num_month_back_pay
print("Retroactive pay:" + "{:14.2f}".format(retra_pay))
