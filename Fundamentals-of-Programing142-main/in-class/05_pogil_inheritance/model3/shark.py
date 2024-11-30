from animal import Animal


class Shark(Animal):
    """Sharks are simple animals.

    Sharks have no legs (are "apods") and swim,
    eat meat (are "carnivores"), and say nothing.
    """

    def __init__(self):
        """Construct a new instance of the Shark class."""
        super().__init__("Shark", "meat", "swam", "")

    def respire(self):
        """Shark respired."""
        self.respired += 1
        return "This shark respired through its gills."

    def stalk(self, position):
        """Move halfway from self.position to position."""
        self.position = (
            (self.position[0] + position[0]) / 2,
            (self.position[1] + position[1]) / 2,
        )
        return self.position
