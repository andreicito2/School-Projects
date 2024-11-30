# CPTR 242: Project -- Graphs

## Problem Overview

This project will use the BRIDGES API with an actor/movie dataset from IMDB.
You be building a graph using BRIDGES elements, which will enable you to visualize the network of connections between actors and movies.
Note that the BRIDGES visualization will also be a means to debug your program, as it will let you view your data structure and its contents after each operation.
The actor/movie dataset has been curated from IMDB as a text file containing a set of actor/movie pairs, one pair per line.

The driver will be managing the actor and movie details so you can focus on operations related to the graph.

The primary function you will be writing is to determine the Bacon Number.
The concept is a game created to demonstrate _six degrees of separation_ as it plays out for actors.
The goal is to link any actor to Kevin Bacon through other actors and the movies they were in.
Each actor counts as one degree and the complete process should be six or less.

## Learning Objectives

* Understanding of an adjacency list graph structure
* Able to read C++ library documentation
* Able to create complete tests
* Visualize the data structure using the BRIDGES API


## Resources

* Bacon Number: <https://en.wikipedia.org/wiki/Six_Degrees_of_Kevin_Bacon>
* Six degrees of separation: <https://en.wikipedia.org/wiki/Six_degrees_of_separation>
* Bridges Site: <http://bridgesuncc.github.io/>
  * Getting Started: <http://bridgesuncc.github.io/bridges_setup.html>
  * API Documentation: <http://bridgesuncc.github.io/doc/cxx-api/current/html/index.html>

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. Implement __addVertex__, __addEdge__, __visualizeVertex__, __visualizeEdge__, __resetVisualizer__, and __getBaconNumber__ for the adjacency graph implementation in _imdb_graph.cpp_.
    A class header and function stubs have been given to you.
    Please read the header file for a detailed description of the functions.
2. Submitty will be used for grading through automated tests.

## Test Driver

The project continues to follow the testing structure from prior homework.
The Submitty tests are based on this test driver.

These are the complete menu options available:
```txt
Menu options:
 - Menu.                                                 Display menu.
 - AddVertex <actorOrMovie>.                             Add a vertex to the graph.
 - AddActor <actorOrMovie>.                              Add an actor to the graph.
 - AddEdge <actorOrMovie> <actorOrMovie>.                Add an edge to the graph.
 - AddAll.                                               Add all actors and movies to the graph.
 - GetBaconNumber <actor1> <actor2>.                     Calculate the Bacon Number.
 - GetVertexColor <actorOrMovie>.                        Returns vertex Color in hexadecimal.
 - GetEdgeColor <actorOrMovie> <actorOrMovie>.           Returns edge color in hexadecimal.
 - SetVertexColor <actorOrMovie> <color>.                Change the color of the vertex.
 - SetEdgeColor <actorOrMovie> <actorOrMovie> <color>.   Change the color of the edge.
 - DoesVertexExist <actorOrMovie>.                       Returns a boolean if vertex exists in graph.
 - DoesEdgeExist <actorOrMovie> <actorOrMovie>.          Returns a boolean if edge exist between two vertices in graph.
 - CheckDefaultVisualization.                            Returns a boolean if nodes in graph are reset to default values
 - ResetVisualizer.                                      Reset the visualization of all edges and vertices.
 - Visualize.                                            Builds the bridges visualization and prints the URL.
 - Quit.                                                 Quit application.
```

Here is a sample set of input to get you started.

```txt
Menu
AddVertex Cary_Grant
AddVertex Denzel_Washington
Visualize
AddActor Billy_Bob_Thornton
AddActor Adam_Sandler_(I)
AddActor Bill_Murray_(I)
AddActor Kevin_Bacon_(I)
Visualize
SetVertexColor Billy_Bob_Thornton red
SetVertexColor Adam_Sandler_(I) yellow
SetVertexColor Bill_Murray_(I) yellow
SetVertexColor Kevin_Bacon_(I) green
SetVertexColor Going_Overboard_(1989) yellow
SetEdgeColor Billy_Bob_Thornton Going_Overboard_(1989) yellow
SetEdgeColor White_Chicks SAW yellow
SetEdgeColor Adam_Sandler_(I) Going_Overboard_(1989) yellow
SetVertexColor Saturday_Night_Live:_Game_Show_Parodies_(1998) yellow
SetEdgeColor Adam_Sandler_(I) Saturday_Night_Live:_Game_Show_Parodies_(1998) yellow
SetEdgeColor Bill_Murray_(I) Saturday_Night_Live:_Game_Show_Parodies_(1998) yellow
SetVertexColor Saturday_Night_Live_Christmas_(1999) yellow
SetEdgeColor Adam_Sandler_(I) Saturday_Night_Live_Christmas_(1999) yellow
SetEdgeColor Bill_Murray_(I) Saturday_Night_Live_Christmas_(1999) yellow
SetVertexColor Wild_Things_(1998) yellow
SetEdgeColor Bill_Murray_(I) Wild_Things_(1998) yellow
SetEdgeColor Kevin_Bacon_(I) Wild_Things_(1998) yellow
SetVertexColor She's_Having_a_Baby_(1988) yellow
SetEdgeColor Bill_Murray_(I) She's_Having_a_Baby_(1988) yellow
SetEdgeColor Kevin_Bacon_(I) She's_Having_a_Baby_(1988) yellow
Visualize
AddAll
Visualize
Quit
```

Expected output:
```sh
Example Test
Menu options:
 - Menu.                                                 Display menu.
 - AddVertex <actorOrMovie>.                             Add a vertex to the graph.
 - AddActor <actorOrMovie>.                              Add an actor to the graph.
 - AddEdge <actorOrMovie> <actorOrMovie>.                Add an edge to the graph.
 - AddAll.                                               Add all actors and movies to the graph.
 - GetBaconNumber <actor1> <actor2>.                     Calculate the Bacon Number.
 - GetVertexColor <actorOrMovie>.                        Returns vertex Color in hexadecimal.
 - GetEdgeColor <actorOrMovie> <actorOrMovie>.           Returns edge color in hexadecimal.
 - SetVertexColor <actorOrMovie> <color>.                Change the color of the vertex.
 - SetEdgeColor <actorOrMovie> <actorOrMovie> <color>.   Change the color of the edge.
 - DoesVertexExist <actorOrMovie>.                       Returns a boolean if vertex exists in graph.
 - DoesEdgeExist <actorOrMovie> <actorOrMovie>.          Returns a boolean if edge exist between two vertices in graph.
 - CheckDefaultVisualization.                            Returns a boolean if nodes in graph are reset to default values
 - ResetVisualizer.                                      Reset the visualization of all edges and vertices.
 - Visualize.                                            Builds the bridges visualization and prints the URL.
 - Quit.                                                 Quit application.
Vertex for Cary_Grant was added to the graph.
Vertex for Denzel_Washington was added to the graph.
Success: Assignment posted to the server. 
Check out your visualization at:

http://bridges-clone.herokuapp.com/assignments/2422/prestoncarman

Graph was visualized.
Actor Billy_Bob_Thornton was found and 55 movies have been added.
Actor Adam_Sandler_(I) was found and 33 movies have been added.
Actor Bill_Murray_(I) was found and 56 movies have been added.
Actor Kevin_Bacon_(I) was found and 57 movies have been added.
Success: Assignment posted to the server. 
Check out your visualization at:

http://bridges-clone.herokuapp.com/assignments/2422/prestoncarman

Graph was visualized.
Success: Assignment posted to the server. 
Check out your visualization at:

http://bridges-clone.herokuapp.com/assignments/2422/prestoncarman

Graph was visualized.
All actors and movies have been added.
Success: Assignment posted to the server. 
Check out your visualization at:

http://bridges-clone.herokuapp.com/assignments/2422/prestoncarman

Graph was visualized.
Quit
Testing completed.
```

log.txt

```txt
Menu command number 1 completed.
AddVertex command number 2 completed.
AddVertex command number 3 completed.
Visualize command number 4 completed.
AddActor command number 5 completed.
AddActor command number 6 completed.
AddActor command number 7 completed.
AddActor command number 8 completed.
Visualize command number 9 completed.
SetVertexColor command number 10 completed.
SetVertexColor command number 11 completed.
SetVertexColor command number 12 completed.
SetVertexColor command number 13 completed.
SetVertexColor command number 14 completed.
SetEdgeColor command number 15 completed.
SetEdgeColor command number 16 completed.
SetEdgeColor command number 17 completed.
SetVertexColor command number 18 completed.
SetEdgeColor command number 19 completed.
SetEdgeColor command number 20 completed.
SetVertexColor command number 21 completed.
SetEdgeColor command number 22 completed.
SetEdgeColor command number 23 completed.
SetVertexColor command number 24 completed.
SetEdgeColor command number 25 completed.
SetEdgeColor command number 26 completed.
SetVertexColor command number 27 completed.
SetEdgeColor command number 28 completed.
SetEdgeColor command number 29 completed.
Visualize command number 30 completed.
AddAll command number 31 completed.
Visualize command number 32 completed.
```

* Create alternate tests to cover all the test functions
* Create a user-input test file to allow for consistent and repeatable testing

## Sign Up For BRIDGES

**Note -- you only need to do this once. If you completed this step on the last project, you do not need to do it again.**

Please sign up for a BRIDGES account at [Bridges Sign Up](http://bridges-cs.herokuapp.com/signup).
Once you have an account, put your username and the API Sha1 key in the `bridges_user.h` file.

1. Sign up for [bridges](http://bridges-cs.herokuapp.com/signup)
1. Navigate to your profile.
1. Put your __User Name__ in `bridges_user.h` file
1. Put your __API Sha1 Key__ in `bridges_user.h` file

These steps are needed to make sure you have access to the IMDB data and visualization for the project.

## Setup Local IDE

**Note -- you only need to do this once. If you completed this step on the last project, you do not need to do it again.**

Follow the [Bridges Setup Directions](http://bridgesuncc.github.io/bridges_setup.html) to configure your system.
Please install the libraries in your `student242/include` folder for the `make` file to work properly.
(If you install it in another directory, the make file will need to be altered.)

A script has been created for Code.CS.
If you are using a different IDE, take a look at the website for setup details.
You can also look at supplied setup script to see the exact commands which are being used by Code.CS. 

If you are using Code.CS, do the following:

```sh
cd student242
./setup_bridges_on_linux.sh
```

## Compiling Graph Implementations

A _make_ file has been provided to help with compiling your code.
Simply run ```make``` to compile your code after the setup has been completed.
Then execute ```./a.out```.
These commands have been tested on c9.io and the lab computers.

```sh
make
./a.out
```

The build files can be cleaned up by running ```make clean```.

## Tips

1. In this project, you will get familiar with reading library documentation.
   Bridges has fairly good documentation and you will need it to figure out the available options for completing this assignment.
2. Your IDE may show red marks because it does not know about the BRIDGES library.
   You will still be able to build and run the software, even with these marks.
   Try compiling to see if there is an issue.
3. Function `resetVisualizer()`, uses the color __steelblue__ as the default for both the vertex and edge color.
4. You create a text file with all the user input. Then when you run the program you may pass in this file as input.

  ```sh
  ./a.out < sample.txt
  ```

  This is a good way to recreate your test each time you run your program.
