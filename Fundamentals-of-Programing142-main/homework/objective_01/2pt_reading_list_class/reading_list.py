"""
Intermediate Problem: Define a class named 'ReadingList' and create `add_book` instance method.
   Include two special instance methods to allow less than and greater than comparisons.
   Use the number of books in the list for the comparison.

File Name: reading_list.py
Name:      ?
Course:    CPTR 142
"""

# Your code goes here
class ReadingList:
    def __init__(self):
        self.books = []

    def add_book(self, num):
        self.books.append(num)

    def __it__(self, other):
        return self.books > other.books

    def __gt__(self, other):
        return self.books < other.books