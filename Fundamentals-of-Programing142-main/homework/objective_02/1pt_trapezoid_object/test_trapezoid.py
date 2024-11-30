"""
Beginner Problem: Define a class name 'Test_Trapezoid' that inherits 'unittest.TestCase'.
    Create 'test_area' instance method to validate the area method.

File Name: test_trapezoid.py
Name:      ?
Course:    CPTR 142
"""

# Your code goes here
import unittest
import trapezoid
class Test_Trapezoid(unittest.TestCase, trapezoid.Trapezoid):
    def test_area(self):
        a = trapezoid.Trapezoid(10,5,4)
        self.assertEqual(a.area(), 30.00)
        
        a = trapezoid.Trapezoid(25.34,7.12,0.5)
        self.assertEqual(a.area(), 8.12)