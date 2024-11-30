"""
In-Class Exercise: Write a phone number parser that accepts a 10-digit
                   number of the form DDDDDDDDDD, and prints out:
                       a. number of digits
                       b. formatted (DDD) DDD-DDDD version
                       c. area code only
                       e. local number only

 File Name: phone_number.py
 Course:    CPTR 141
"""

# collect user input
phone = input("Enter a phone number: ")

# replace the 0 and x's below with appropriate string opererations
print("You enered {} digits, the first was \"{}\"".format(
  len(phone),
  phone[0]
))
print("Formatted: ({}) {}-{}".format(
  phone[0:3],
  phone[3:6],
  phone[6:]
))
print("Area Code: {}".format(
  phone[0:3]
))
print("Local Form: {}-{}".format(
  phone[3:6],
  phone[6:]
))