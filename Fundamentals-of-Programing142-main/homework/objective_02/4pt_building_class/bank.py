"""
Expert Problem: Define a class name 'Bank' following the details in the README.md

File Name: bank.py
Name:      ?
Course:    CPTR 142
"""

# Code goes here
import building
class Bank(building.Building):
    def __init__(self, size=10000, cost=2000000):
        building.Building.__init__(self, size, cost)
        self.client_list = {}
        self.on_hand = 0

    def add_client_deposit(self, client, deposit_amount):
        self.client_list[client] = deposit_amount + self.client_list.get(client, 0)

    def cash_on_hand(self):
        self.on_hand = 0
        for amount in self.client_list.values():
            self.on_hand += amount
        return self.on_hand

    def __str__(self):
        return (f"The build is {self.size} square ft and costs ${self.cost}.\nThe building is a bank with ${self.on_hand} cash on hand.")
