"""
Implement your class in the file pet.py

Use this file to test your class. The code you write in this file will
not be graded.
"""

import dog

# Pet Class
pet_test = dog.pet.Pet("Boots")
print(pet_test)

# test the dog class
test_pet_name = "Boots"
dog_test = dog.Dog(test_pet_name, 50)
print(dog_test)
