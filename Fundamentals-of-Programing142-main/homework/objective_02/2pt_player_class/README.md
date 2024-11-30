# CPTR 142: Objective #2 (2 point)

## Problem Overview

Your task in this homework assignment is to create a derived class that inherits multiple base classes.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must declare `Player` class in the `player.py` python file that inherits both `Health` and `Team` classes.

1. Ensure the `Player.__str__()` uses the `__str__` from the `Health` base class.

1. You must define a constructor that takes three arguments :

    * a string for the `team_name` used in the `Team` base class
    * an integer for the `health_value` used in the `Health` base class
    * a string for the `player_name` used in the `Player` derived class

1. You must define a `details` method named in the `player.py` python file which prints the player name, team_name, and current health, as shown below.

1. The file `player.py` should not contain a main program, it should only contain your class.  To test your class, add code to the `player_test.py` file.  Note that code in `player_test.py` will not be graded.

1. Below is an example of a call to the `Player.__str__()` and `Player.details()` methods which you could implement in `player_test.py` to test your method.

    Python Code:
    
    ```python
    import player

    test_player = player.Player("Red", 100, "Darius")
    print(test_player)
    print(test_player.details())

    # Prints out damage taken
    test_player.wounded(10)

    # Prints out damage exceeding health_value
    test_player.wounded(90)
    ```

    Output:
    ```html
    Health: 100
    Darius is on Red and has 100 health.
    You have taken 10 damage, you have 90 health points left.
    You ran out of health points, you went to sleep.
    ```

## Grade Specification

You will earn **two point** for completion of this homework problem once your solution passes all Submitty tests (indicated by all green bars).
