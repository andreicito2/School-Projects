"""
Exercise: Exploring Variable Scope

Commands:
  - Command  I: var_one = 'A'
  - Command II: print(var_one)

Instructions: For each experiment below, complete the following tasks.
  1. Without actually making the change, predice if the program will compile.
  2. Make the change and confirm your prediction.  If the program does compile,
     predict the output without actually running it.
  3. Finally, compile and run the program to see if your hypotheses are correct.

Experiments: (reset to the starting program after each experiment)
  - Experiment #1: Add commands I at POINT A and command II at POINT B
  - Experiment #2: Add commands I and II, in order, at POINT C
  - Experiment #3: Add command I at POINT C and command II at POINT D
  - Experiment #4: Add command I at POINT A and command II at POINT D
  - Experiment #5: Add command II at POINT B and do not add command I
  - Experiment #6: Add command I at POINT D and command II at POINT E

File Name: scope.py
Course:    CPTR 141
"""

# POINT A


def main():

    # POINT B

    var_one = -1

    def my_func():

        # POINT C

        pass

    my_func()

    # POINT D


main()

# POINT E
