# CPTR 242: Project -- Binary Tree

## Problem Overview

This project will use the BRIDGES API with the earthquake dataset built from the USGS site (tweets).
You be building a binary search tree using BRIDGES elements, which will enable you to visualize the tree of earthquakes keyed off their magnitude.
Note that the BRIDGES visualization will also be a means to debug your program, as it will let you view your data structure and its contents after each operation.
The earthquake dataset has been collected from the USGS site with the following information: magnitude, longitude, latitude, location, title, URL and time.

The driver will be managing the binary search tree details so you can focus on search and traversal operations related to the tree.

The primary functions you will be writing are to determine the smallest earthquake, largest earthquake, highlight earthquakes in a location, and a range of earthquakes.

## Resources

* USGS: <https://www.usgs.gov/natural-hazards/earthquake-hazards>
* Bridges Site: <http://bridgesuncc.github.io/>
  * Getting Started: <http://bridgesuncc.github.io/bridges_setup.html>
  * API Documentation: <http://bridgesuncc.github.io/doc/cxx-api/current/html/index.html>
  * Earthquake Data: <http://bridgesuncc.github.io/doc/cxx-api/current/html/classbridges_1_1_earthquake_u_s_g_s.html>

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Implement __getSmallestQuake__, __getLargestQuake__, __countRange__, __countByLocation__, __countWithStyle__, and __resetVisualization__ that work on a Binary Search Tree implementation in _usgs_tree.cpp_.
    A class header and function stubs have been given to you with detailed descriptions.
    Please read the header file for a detailed description of the functions.
2. The Submitty server will be used to grade the assignment with automated tests.

## Test Driver

The project continues to follow the testing structure from prior homework.
The Submitty tests are based on this test driver.

These are the complete menu options available:
```txt
Select options:
 - Menu. Display menu.
 - BuildTree <size>.                     Adds all earthquakes to the tree.
 - SmallestQuake <color>.                Finds the smallest quake in the tree.
 - LargestQuake <color>.                 Finds the largest quake in the tree.
 - CountRange <min> <max> <color>.       Finds the all quakes in a given range in the tree.
 - CountByLocation <location> <color>.   Finds the all quakes for this location in the tree.
 - CountTreeInStyle <color1> <color2>.   Style the tree and count all quakes in the tree.
 - Visualize.                            Builds the bridges visualization and prints the URL.
 - ResetVisualization.                   Reset the visualization of all tree nodes and edges.
 - ResetTree.                            Remove all items from the tree.
 - Quit.                                 Quit application.
 ```

 Here is a sample input to get you started.

 ```txt
Menu
BuildTree 50
Visualize
SmallestQuake green
LargestQuake red
CountRange 2.0 5.0 orange
CountByLocation CA yellow
Visualize
Quit
```

Expected output:

```sh
Select options:
 - Menu. Display menu.
 - BuildTree <size>.                     Adds all earthquakes to the tree.
 - SmallestQuake <color>.                Finds the smallest quake in the tree.
 - LargestQuake <color>.                 Finds the largest quake in the tree.
 - CountRange <min> <max> <color>.       Finds the all quakes in a given range in the tree.
 - CountByLocation <location> <color>.   Finds the all quakes for this location in the tree.
 - CountTreeInStyle <color1> <color2>.   Style the tree and count all quakes in the tree.
 - Visualize.                            Builds the bridges visualization and prints the URL.
 - ResetVisualization.                   Reset the visualization of all tree nodes and edges.
 - ResetTree.                            Remove all items from the tree.
 - Quit.                                 Quit application.
50 quakes have been added.
Success: Assignment posted to the server. 
Check out your visualization at:

http://bridges-cs.herokuapp.com/assignments/2423/laddbr

Tree was visualized.
The smallest quake was a 0.97 in 14km N of Banning, CA.
The largest quake was a 5.5 in 5 km NNE of Santa María Ecatepec, Mexico.
The tree has 21 quakes between 2 and 5.
The CA has 15 quakes.
Success: Assignment posted to the server. 
Check out your visualization at:

http://bridges-cs.herokuapp.com/assignments/2423/laddbr

Tree was visualized.
```

Resulting `log.txt`:

```txt
Menu command number 1 completed.
BuildTree command number 2 completed.
Visualize command number 3 completed.
SmallestQuake command number 4 completed.
LargestQuake command number 5 completed.
CountRange command number 6 completed.
CountByLocation command number 7 completed.
Visualize command number 8 completed.
Quit
Testing completed
```

* Create alternate tests to cover all the test functions
* Create a user-input test file to allow for consistent and repeatable testing

## Sign Up For BRIDGES

**Note -- you only need to do this once. If you completed this step on the last project, you do not need to do it again.**

Please sign up for a BRIDGES account at [Bridges Sign Up](http://bridges-cs.herokuapp.com/signup).
Once you have an account, put your username and the API Sha1 key in the `bridges_user.h` file.

1. Sign up for (bridges](http://bridges-cs.herokuapp.com/signup)
1. Navigate to your profile.
1. Put your __User Name__ in `bridges_user.h` file
1. Put your __API Sha1 Key__ in `bridges_user.h` file

These steps are needed to make sure you have access to the Earthquake data and visualization for the project.

## Setup Local IDE

**Note -- you only need to do this once. If you completed this step on the last project, you do not need to do it again.**

Follow the [Bridges Setup Directions](http://bridgesuncc.github.io/bridges_setup.html) to configure your system.
Please install the libraries in your _student242/include_ folder for the `make` file to work properly.
(If you install it in another directory, the make file will need to be altered.)

A script has been created for Code.CS.
If you are using a different IDE, take a look at the website for setup details.
You can also look at supplied setup script to see the exact commands which are being used by Code.CS. 

If you are using Code.CS, do the following:

```sh
cd student242
./setup_bridges_on_linux.sh
```

## Compiling BST Implementations

A _make_ file has been provided to help with compiling your code.
Simply run ```make``` to compile your code after the setup has been completed.
Then execute ```./usgs_tree.out```.
These commands have been tested on c9.io and the lab computers.

```sh
make
./usgs_tree.out
```

The build files can be cleaned up by running ```make clean```.

## Tips

1. In this project, you will get familiar with reading library documentation.
   Bridges has fairly good documentation and you will need it to figure out the available options for completing this assignment.
2. Your IDE may show red marks because it does not know about the BRIDGES library.
   You will still be able to build and run the software, even with these marks.
   Try compiling to see if there is really an issue.
3. Function `resetVisualizer()`, uses the color __steelblue__ as the default for both the vertex and edge color.
4. You create a text file with all the user input. Then when you run the program you may pass in this file as input.

  ```sh
  usgs_tree.out < sample.txt
  ```

  This is a good way to recreate your test each time you run your program.

## Submission

Your submission must include a `usgs_tree.cpp` and modified `bridges_user.h` file.
All other _.h_ and _.cpp_ files should remain unchanged.
