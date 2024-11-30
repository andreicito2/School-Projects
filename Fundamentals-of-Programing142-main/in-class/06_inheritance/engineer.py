from person import Person

class Engineer(Person):
    def design_something(self):
        print("Design something.".format(self.name))
