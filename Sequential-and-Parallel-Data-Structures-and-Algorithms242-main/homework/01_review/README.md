# CPTR 242: Homework Assignment #1

## Problem Overview

Complete a program that draws shapes and other items on a board.

## Description

A class named _Draw_ has been given to you that showcases the interaction you will have with the board.
Use the board two-dimensional array of the _Draw_ class to manipulate the board display.
You will need to initialize and clear the board.
To clear the board, update the location on the board to an empty character.

These are the complete menu options available:

```sh
Menu options:
  DrawPoint <row> <col> <character>. Adds a point to the GameBoard.
  DrawLine <row> <col> <row2> <col2> <character>. Adds a line to the GameBoard.
  DrawRectangle <row> <col> <row2> <col2> <character>. Adds a rectangle to the GameBoard.
  DrawFun. Adds a creative drawing to the GameBoard.
  Visualize. Draws the GameBoard.
  ResetVisualization. Reset the GameBoard to empty.
  Quit. Quit application.
  Menu. Display menu.
```

## Solution Specification

Your `draw.cpp` should support the following features:

1. Draw a point
1. Draw a Line
1. Draw a Rectangle
1. Draw a fun picture
1. Clear board

A `draw_driver.cpp` has been provided to allow a user to run test input.
The code can be compiled by running the following command.

```sh
make
```

To test the code, run this command:

```sh
./a.out 
```

To remove compiled and log files, run this command:

```sh
make clean
```

Example Run:

```sh
Type 'Menu' to see all the display menu.
Student Test
DrawPoint 3 4 *
Draw * point at (3,4).
Visualize
+----------+
|          |
|          |
|          |
|    *     |
|          |
|          |
|          |
|          |
|          |
|          |
+----------+
Quit
```

Resulting log file (`log.txt`):

```sh
DrawPoint is the 1 command completed.
Visualize is the 2 command completed.
Quit
Testing completed.
```

The input shown above displays the interaction you will have in order to use the various functions seen in your `draw.cpp`.
The `Menu` command will display all the various keywords you can use to correctly call the action you will like to do.
In this case, we had called the _DrawPoint_ function from the `draw.cpp` file by using the keyword `DrawPoint 4 3 *`.
Keep in mind the two numbers after _DrawPoint_ are followed by a character that will show on the board.
Other functions are set up with a similar set of parameters.

## Tips

* Start with the `drawPoint` function in the _Draw_ class and simply place a random symbol at a random coordinate location.

## Submission

The submission should only include changes to `draw.cpp`.
All other files (_.h_ and _.cpp_) should remain unchanged.
