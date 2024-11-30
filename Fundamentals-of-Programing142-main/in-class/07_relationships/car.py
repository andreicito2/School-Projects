import vehicle

class Car(vehicle.Vehicle):
    def __init__(self,name):
        super().__init__(name, 4)