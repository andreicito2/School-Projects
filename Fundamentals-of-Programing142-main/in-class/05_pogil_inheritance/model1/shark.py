class Shark:
    """Sharks are simple animals.

    Sharks have no legs (are "apods") and swim,
    eat meat (are "carnivores"), and say nothing.
    """

    def __init__(self):
        """Construct a new instance of the Shark class."""
        self.position = (0, 0)
        self.respired = 0
        self.stomach = []

    def eat(self, item):
        """Shark eats meat."""
        if item == "meat":
            self.stomach.append(item)
            return "ate " + item
        else:
            return "This carnivore doesn't eat " + item

    def move(self, delta):
        """Shark walks on 4 legs."""
        self.position = (self.position[0] + delta[0], self.position[1] + delta[1])
        return "This apod swam to " + str(self.position)

    def respire(self):
        """Shark respired."""
        self.respired += 1
        return "This shark respired through its gills."

    def speak(self):
        """Shark says nothing."""
        return ""

    def stalk(self, position):
        """Move halfway from self.position to position."""
        self.position = (
            (self.position[0] + position[0]) / 2,
            (self.position[1] + position[1]) / 2,
        )
        return self.position
